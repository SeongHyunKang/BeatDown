using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public void PlayGame()
    {
        SceneManager.LoadScene(1);
    }
    public void QuitGame()
    {
        Application.Quit();
    }
    public void toNotFound()
    {
        SceneManager.LoadScene(1);
    }
    public void toBeatRunEaster()
    {
        SceneManager.LoadScene("UnirunBased");
    }
    public void LevelSelect()
    {
        SceneManager.LoadScene("LevelSelect");
    }
}
