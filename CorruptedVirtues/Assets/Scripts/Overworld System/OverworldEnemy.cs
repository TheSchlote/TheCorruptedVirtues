using UnityEngine;

public class OverworldEnemy : MonoBehaviour
{
    public string EnemyName;

    private void Awake()
    {
        if (GameManger.gameManger.OverworldEnemyFought.Count > 0)
        {
            foreach (string overworldenemyname in GameManger.gameManger.OverworldEnemyFought)
            {
                if (GameObject.Find(overworldenemyname))
                {
                    GameObject.Find(overworldenemyname).SetActive(false);
                }
            }
            GameManger.gameManger.OverworldEnemyFought.Clear();
        }
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        Debug.Log(collision);
        if (collision.gameObject.CompareTag("Player") && gameObject.CompareTag("Enemy"))
        {
            Debug.Log("You touched an Enemy!");
            GameManger.gameManger.OverworldEnemyFought.Add(gameObject.name);
            GameManger.gameManger.battleHasStarted = true;
            
            //Destory Object that was touched
        }
        else if (collision.gameObject.CompareTag("Player") && gameObject.CompareTag("Boss"))
        {
            Debug.Log("BOSS BATTLE!");

            GameManger.gameManger.battleHasStarted = true;
            GameManger.gameManger.bossBattle = true;
        }

        if (collision.gameObject.CompareTag("Player"))
        {
            GameManger.gameManger.playerOverworldPositionOnBattle = collision.transform.position;
            GameManger.gameManger.sceneSpawnPoint = "";
        }

    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (RegularEnemyTouchesPlayer(other))
        {
            Debug.Log("This Enemy will be added to the battle " + EnemyName);
            GameManger.gameManger.EncounteredEnemyNames.Add(EnemyName);
        }
        if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("Boss"))
        {
            Debug.Log("This is the boss!! " + EnemyName);
            //Clear out other enemies
            GameManger.gameManger.EncounteredEnemyNames.Clear();
            //Add only boss
            GameManger.gameManger.EncounteredEnemyNames.Add(EnemyName);
        }
    }

    public bool RegularEnemyTouchesPlayer(Collider2D other)
    {
        return other.gameObject.CompareTag("Player") && gameObject.CompareTag("Enemy");
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
