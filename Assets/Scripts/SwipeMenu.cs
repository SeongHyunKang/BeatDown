using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SwipeMenu : MonoBehaviour
{
    public void NotFoundScene()
    {
        SceneManager.LoadScene("NotFound");
    }
    public void ForbiddenScene()
    {
        SceneManager.LoadScene("Forbidden");
    }
    public void BadRequestScene()
    {
        SceneManager.LoadScene("BadRequest");
    }

}
