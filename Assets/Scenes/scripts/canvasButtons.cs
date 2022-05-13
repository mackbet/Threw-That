using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class canvasButtons : MonoBehaviour
{
    public GameObject menu;
    public GameObject soundControllCheckbox;
    public GameObject musicsControllCheckbox;
    public GameObject music;
    public bool started = false;
    void Start()
    {
        if (PlayerPrefs.GetString("sounds") == "No")
        {
            soundControllCheckbox.GetComponent<Toggle>().isOn = false;
        }
        else
        {
            soundControllCheckbox.GetComponent<Toggle>().isOn = true;
        }

        if (PlayerPrefs.GetString("musics") == "No")
        {
            musicsControllCheckbox.GetComponent<Toggle>().isOn = false;
            music.GetComponent<AudioSource>().volume = 0;
        }
        else
        {
            musicsControllCheckbox.GetComponent<Toggle>().isOn = true;
        }
        started = true;
    }

    // Update is called once per frame
    void Update()
    {
    }
    public void Retry()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void OpenMenu()
    {
        menu.SetActive(true);
        Time.timeScale = 0;
    }
    public void CloseMenu()
    {
        menu.SetActive(false);
        Time.timeScale = 1;
    }
    public void SoundsControll()
    {
        if (started == true) {
            Debug.Log("click");
            if (PlayerPrefs.GetString("sounds") == "No")
            {
                PlayerPrefs.SetString("sounds", "Yes");
                Debug.Log("Sounds Yes");
            }
            else
            {
                PlayerPrefs.SetString("sounds", "No");
                Debug.Log("Sounds No");
            }
        }
    }
    public void MusicsControll()
    {
        if (started == true)
        {
            Debug.Log("click");
            if (PlayerPrefs.GetString("musics") == "No")
            {
                PlayerPrefs.SetString("musics", "Yes");
                music.GetComponent<AudioSource>().volume = 0.3f;
                Debug.Log("Musics Yes");
            }
            else
            {
                PlayerPrefs.SetString("musics", "No");
                music.GetComponent<AudioSource>().volume = 0;
                Debug.Log("Musics No");
            }
        }
    }
    public void Exit()
    {
        Application.Quit();
    }
}
