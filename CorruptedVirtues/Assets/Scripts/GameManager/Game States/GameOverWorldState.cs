using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverWorldState : GameBaseState
{
    public override void EnterState(GameManger gameManger)
    {
        Debug.Log("GameOverWorldState");
        
    }

    public override void Update(GameManger gameManger)
    {
        gameManger.ThereShouldOnlyBeOneOverWorldCharacter();
        StartBattle(gameManger);
    }

    private static void StartBattle(GameManger gameManger)
    {
        if (gameManger.battleHasStarted)
        {
            
            SceneManager.LoadScene(2);//Battle scene
            gameManger.TransistinoToState(gameManger.BattleState);
        }
    }
}