using UnityEngine;

public class OverworldEnemy : MonoBehaviour
{
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Debug.Log(collision);
        if (collision.gameObject.CompareTag("Player"))
        {
            Debug.Log("You touched an Enemy!");

            GameManger.gameManger.battleHasStarted = true;
            GameManger.gameManger.EncounteredEnemyNames.Add(gameObject.name);
            //Destory Object that was touched
        }

    }
}
