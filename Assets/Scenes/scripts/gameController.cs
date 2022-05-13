using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;
using UnityEngine.Advertisements;
using Random = System.Random;

public class gameController : MonoBehaviour
{

    public Vector2 touchPositionStart;
    public Vector2 touchPositionEnd;
    public Vector2 differenceOfPosition;
    public Vector3 difference;
    public Color colorStart;
    public Color colorEnd;

    public Rigidbody ballRigidbody;
    public Text bestScoreTxt;
    public Text currentScoreTxt;
    public Text attemptsCountTxt;
    public Text result;
    public GameObject loseTxt;
    public GameObject retry;

    public GameObject platformContainer;
    public GameObject holeContainer;
    public GameObject ballContainer;

    public GameObject platformPrefab;
    public GameObject holePrefab, movingHolePrefabX, movingHolePrefabZ;
    public GameObject ballPrefab;
    public GameObject arrow;

    public GameObject cam;
    public GameObject canvas;
    public GameObject hand;
    public GameObject openMenu;
    private RectTransform RectTransform;
    public AudioSource win;
    public AudioSource lose;
    public AudioSource music;

    public Vector3 platformPosition = new Vector3(0, 0, 35);
    public Vector3 holePosition = new Vector3(0, 0, 4);
    public Vector3 ballPosition = new Vector3(0, 1, -4);
    public Vector3 cameraNewPosition = new Vector3(0, 5, -10);

    public int lastLevel = 0;
    public int level = 0;
    public int currentScore = 0;
    public int bestScore = 0;
    public int attempts = 5;
    public int hardLevel = 0;

    public bool camIsMoving=false;
    public bool simulating = false;
    public bool autoWin = false;

    public float speedOfCamera = 50f;
    public float step = 40f;
    public float maxForce = 5000f;
    private float screenWidth;
    private float screenHeight;

    public GameObject ball;
    public trajectory Trajectory;

    void Start()
    {
        speedOfCamera = speedOfCamera * Time.deltaTime;

        RectTransform = canvas.GetComponent<RectTransform>();
        screenWidth = RectTransform.rect.width;
        screenHeight = RectTransform.rect.height;
        arrow.transform.GetChild(0).gameObject.GetComponent<SpriteRenderer>().color = colorStart;

        if (PlayerPrefs.GetString("sounds") == "No")
        {
            Debug.Log("Sounds No");
        }
        else
        {
            Debug.Log("Sounds Yes");
        }

        if (PlayerPrefs.GetString("musics") == "No")
        {
            Debug.Log("Musics No");
        }
        else
        {
            Debug.Log("Musics Yes");
        }
    }


    void Update()
    {
        if (autoWin)
        {
            level++;
            autoWin = false;
        }

        updateIndicators();

        if (level != lastLevel)
        {
            attempts+=2; 

            playWin();
            addPlatform();
            addHole();
            camIsMoving = true;
            cameraNewPosition = new Vector3(cameraNewPosition.x, cameraNewPosition.y, cameraNewPosition.z + step);
            ballPosition = new Vector3(ballPosition.x, ballPosition.y, ballPosition.z + step);

            lastLevel = level;
        }

        if (cam.transform.position != cameraNewPosition)
        {
            cam.transform.position = Vector3.MoveTowards(cam.transform.position, cameraNewPosition, speedOfCamera);
        }
        else if(cam.transform.position == cameraNewPosition && camIsMoving == true)
        {
            clearBall();
            clearPlatform();
            clearHole();

            newBall();
            camIsMoving = false;
        }
        else
        {
            if (ball != null && ball.transform.position != ballPosition)
            {
                ball.transform.position = Vector3.MoveTowards(ball.transform.position, ballPosition, 0.2f);
            }
            else
            {
                if (ball != null && attempts >= 0)
                {
                    controller();
                }
            }
        }
    }

    public void addPlatform()
    {
        platformPosition = new Vector3(platformPosition.x, platformPosition.y, platformPosition.z + step);
        GameObject newPlatform = Instantiate(platformPrefab, platformPosition, Quaternion.identity);
        newPlatform.transform.SetParent(platformContainer.transform);
    }
    public void addHole()
    {
        if (level / 10 % 2 == 0)
        {
            hardLevel = 0;
            if (level % 10 < 5)
            {
                holePosition = new Vector3(0f, holePosition.y, holePosition.z + step + newDistance());
            }
            else
            {
                holePosition = new Vector3(random_X(), holePosition.y, holePosition.z + step + newDistance());
            }
            GameObject newHole = Instantiate(holePrefab, holePosition, Quaternion.identity);
            newHole.transform.SetParent(holeContainer.transform);
        }
        else
        {
            Random rand = new Random();
            if(hardLevel==0)
                hardLevel = rand.Next(1, 3);
            if (hardLevel == 1)
            {
                holePosition = new Vector3(0f, holePosition.y, holePosition.z + step + newDistance());
                GameObject newHole = Instantiate(movingHolePrefabX, holePosition, Quaternion.identity);
                newHole.transform.SetParent(holeContainer.transform);
            }
            else if (hardLevel == 2)
            {
                holePosition = new Vector3(rand.Next(-3, 4), holePosition.y, holePosition.z + step + newDistance());
                GameObject newHole = Instantiate(movingHolePrefabZ, holePosition, Quaternion.identity);
                newHole.transform.SetParent(holeContainer.transform);
            }
        }
    }
    public void clearPlatform()
    {
        if (platformContainer.transform.childCount > 1)
        {
            Destroy(platformContainer.transform.GetChild(0).gameObject);
        }
    }
    public void clearHole()
    {
        if (holeContainer.transform.childCount > 1)
        {
            Destroy(holeContainer.transform.GetChild(0).gameObject);
        }
    }
    public void clearBall()
    {
        for (int i = 0; i < ballContainer.transform.childCount; i++)
        {
            Destroy(ballContainer.transform.GetChild(i).gameObject);
        }
    }
    public void controller()
    {
        if (Input.touchCount > 0 && ball.transform.position == ballPosition && !EventSystem.current.currentSelectedGameObject && Time.timeScale==1)
        {
            hand.SetActive(false);
            Touch touch = Input.GetTouch(0);
            if (touchPositionEnd.x == 0 && touchPositionEnd.y == 0)
            {
                touchPositionStart = touch.position;
                arrow.SetActive(true);
            }
            touchPositionEnd = touch.position;

            differenceOfPosition = new Vector2(touchPositionStart.x - touchPositionEnd.x, touchPositionStart.y - touchPositionEnd.y);
            if (differenceOfPosition.y> screenHeight / 2)
            {
                difference = new Vector3(touchPositionStart.x - touchPositionEnd.x, maxForce, maxForce);
            }
            else
            {
                float yz = differenceOfPosition.y/(screenHeight/2)*maxForce;
                difference = new Vector3(touchPositionStart.x - touchPositionEnd.x, yz, yz);
            }
            rotateArrow();
            resizeArrow();
            paintArrow();
            ball.transform.eulerAngles = new Vector3(0, getAngleFromVector2(new Vector2(difference.x, difference.y)), 0);
        }
        else if (touchPositionEnd.x != 0 && touchPositionEnd.y != 0 && ball.transform.position == ballPosition)
        {
            arrow.SetActive(false);
            if (difference.magnitude>20)
            {
                ball.GetComponent<Collider>().enabled = false;
                /*simulating = true;
                bool createNewBall;
                if (Trajectory.showTrajectory(difference, ballPosition))
                    createNewBall = false;
                else
                    createNewBall = true;
                simulating = false;*/
                ball.GetComponent<Collider>().enabled = true;

                ballRigidbody.isKinematic = false;
                ballRigidbody.AddForce(difference);

                ballRigidbody.AddRelativeTorque(difference.y, 0, 0);

                attempts--;

                if (attempts != 0)
                    newBall();
                else
                {
                    ball = null;
                    ballRigidbody = null;
                }
                /*
                if (createNewBall)
                {
                    if (attempts > 1)
                    {
                        newBall();
                    }
                    else
                    {
                        checkLose();
                    }
                }
                else
                {
                    ball = null;
                    ballRigidbody = null;
                    arrow = null;
                }*/
            }

            touchPositionStart = new Vector2();
            touchPositionEnd = new Vector2();
        }
    }
    public int random_X()
    {
        Random rand = new Random();
        if(rand.Next(0, 2) == 0)
        {

            return rand.Next(-3, -1);
        }
        else
        {
            return rand.Next(1, 3);
        }
    }

    public void rotateArrow()
    {
        Vector2 vec = new Vector2(difference.x, difference.y);
        arrow.transform.eulerAngles = new Vector3(0, getAngleFromVector2(vec), 0);

    }
    public void resizeArrow()
    {
        float delta = difference.y / maxForce;
        float currentSize = 1f + delta;
        arrow.transform.localScale = new Vector3(1f, 1f, currentSize);
    }
    public void paintArrow()
    {
        float delta = difference.y / maxForce;
        float r = (colorEnd.r - colorStart.r) * delta;
        float g = (colorEnd.g - colorStart.g) * delta;
        float b = (colorEnd.b - colorStart.b) * delta;
        Color currentColor = new Color(colorStart.r + r, colorStart.g + g, colorStart.b + b, 1);
        arrow.transform.GetChild(0).gameObject.GetComponent<SpriteRenderer>().color = currentColor;
    }
    public void playWin()
    {
        if (PlayerPrefs.GetString("sounds") != "No")
        {
            win.Play();
        }
    }
    public void playLose()
    {
        if (PlayerPrefs.GetString("sounds") != "No")
        {
            lose.Play();
        }
    }

    public void checkLose()
    {
        if (attempts <= 0 && retry.active == false)
        {
            music.volume = 0;
            openMenu.SetActive(false);
            retry.SetActive(true);
            loseTxt.SetActive(true);
            playLose();
        }
    }

    public void updateIndicators()
    {
        if (PlayerPrefs.GetInt("bestScore") < level)
            PlayerPrefs.SetInt("bestScore", level);
        
        attemptsCountTxt.text = /*"<size=90>Attempts:</size> " +*/ attempts.ToString();
        bestScoreTxt.text = PlayerPrefs.GetInt("bestScore").ToString();
        currentScoreTxt.text = level.ToString();
    }

    public float getAngleFromVector2(Vector2 p_vector2)
    {
        if (p_vector2.x < 0)
        {
            return 360 - (Mathf.Atan2(p_vector2.x, p_vector2.y) * Mathf.Rad2Deg * -1);
        }
        else
        {
            return Mathf.Atan2(p_vector2.x, p_vector2.y) * Mathf.Rad2Deg;
        }
    }
    public void newBall()
    {
        GameObject newBall = Instantiate(ballPrefab,new Vector3(ballPosition.x, ballPosition.y, ballPosition.z - 3),Quaternion.identity);
        newBall.transform.SetParent(ballContainer.transform);
        newBall.GetComponent<ball>().gameController=this;
        newBall.GetComponent<ball>().ballContainer = ballContainer;
        ball = newBall;
        ballRigidbody = newBall.GetComponent<Rigidbody>();
        arrow = newBall.transform.GetChild(0).gameObject;
    }
    public float newDistance()
    {
        if (level*2>30)
        {
            return 0f;
        }
        else
        {
            return 2f;
        }
    }
}
