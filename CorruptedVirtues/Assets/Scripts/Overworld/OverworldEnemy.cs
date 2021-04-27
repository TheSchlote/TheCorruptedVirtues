using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OverworldEnemy : MonoBehaviour
{
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Debug.Log(collision);
        if (collision.gameObject.tag == "Player")
        {
            Debug.Log("You touched an Enemy!");
            
            SceneManager.LoadScene(2);//Battle scene
        }

    }
}