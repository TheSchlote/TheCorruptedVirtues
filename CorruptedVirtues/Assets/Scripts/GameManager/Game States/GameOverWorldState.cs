using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverWorldState : GameBaseState
{
    public override void EnterState(GameManger gameManger)
    {
        gameManger.EncounteredEnemyNames.Clear();
        Debug.Log("GameOverWorldState");

    }

    public override void Update(GameManger gameManger)
    {
        gameManger.ThereShouldOnlyBeOneOverWorldCharacter();
        //if (gameManger.OverworldEnemyFought.Count > 0)
        //{
        //    foreach (string overworldEnemyName in gameManger.OverworldEnemyFought)
        //    {
        //        if (GameObject.Find(overworldEnemyName))
        //        {
        //            GameObject.Find(overworldEnemyName).SetActive(false);
        //        }
        //    }
        //    gameManger.OverworldEnemyFought.Clear();
        //}
        
        StartBattle(gameManger);
    }

    private static void StartBattle(GameManger gameManger)
    {
        if (gameManger.battleHasStarted)
        {
            SceneManager.LoadScene("ProtoTypeBattle");//Battle scene
            gameManger.TransistinoToState(gameManger.BattleState);
        }
    }
}
