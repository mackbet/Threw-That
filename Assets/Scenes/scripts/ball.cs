using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ball : MonoBehaviour
{
    public gameController gameController;
    public GameObject ballContainer;
    public AudioSource AudioSource;
    public bool collisionChecker = false;
    public bool touch_platform = false;
    private void Start()
    {
        AudioSource = gameObject.GetComponent<AudioSource>();
    }
    private void Update()
    {
        if (gameObject.transform.position.y < -10)
        {
            gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
            touch_platform = true;
            if (gameController.attempts == 0)
            {
                bool fg = true;
                for (int i = 0; i < ballContainer.transform.childCount; i++)
                {
                    if (ballContainer.transform.GetChild(i).GetComponent<ball>().touch_platform == false)
                    {
                        fg = false;
                        break;
                    }
                }
                if (fg)
                    gameController.checkLose();
            }
            Destroy(gameObject);
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "point" && gameController.simulating == false && touch_platform == false)
        {
            gameController.level++;
            Destroy(other.gameObject);
        }
        else
        {
            collisionChecker = true;
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (gameObject.transform.position != gameController.ballPosition && gameController.simulating == false && PlayerPrefs.GetString("sounds") != "No")
        {
            float volume = collision.impulse.magnitude / 20f;
            AudioSource.volume = volume;
            AudioSource.Play();
        }
        if (gameObject.transform.position.z - gameController.ballPosition.z > 1 && collision.transform.tag == "platform" && touch_platform == false)
        {
            gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
            touch_platform = true;
            if (gameController.attempts == 0)
            {
                bool fg = true;
                for(int i = 0; i < ballContainer.transform.childCount; i++)
                {
                    if(ballContainer.transform.GetChild(i).GetComponent<ball>().touch_platform == false)
                    {
                        fg = false;
                        break;
                    }
                }
                if (fg)
                    gameController.checkLose();
            }
        }
    }
    private void OnCollisionStay(Collision collision)
    {
        if (gameObject.transform.position.z - gameController.ballPosition.z > 1 && collision.transform.tag == "platform" && touch_platform == false)
        {
            gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
            touch_platform = true;
            if (gameController.attempts == 0)
            {
                bool fg = true;
                for (int i = 0; i < ballContainer.transform.childCount; i++)
                {
                    if (ballContainer.transform.GetChild(i).GetComponent<ball>().touch_platform == false)
                    {
                        fg = false;
                        break;
                    }
                }
                if (fg)
                    gameController.checkLose();
            }
        }
    }

    private void OnDrawGizmos()
    {
    }
}
