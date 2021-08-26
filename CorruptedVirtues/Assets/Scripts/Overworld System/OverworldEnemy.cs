using UnityEngine;

public class OverworldEnemy : MonoBehaviour
{
    public string EnemyName;
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Debug.Log(collision);
        if (collision.gameObject.CompareTag("Player"))
        {
            Debug.Log("You touched an Enemy!");

            GameManger.gameManger.battleHasStarted = true;
            //Destory Object that was touched


        }

    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Debug.Log("This Enemy will be added to the battle " + EnemyName);
            GameManger.gameManger.EncounteredEnemyNames.Add(EnemyName);
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Debug.Log("This Enemy will not be added to the battle " + EnemyName);
            GameManger.gameManger.EncounteredEnemyNames.Remove(EnemyName);
        }
    }
}
