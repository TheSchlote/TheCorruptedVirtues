using UnityEngine;
using UnityEngine.SceneManagement;

public class GameBattleState : GameBaseState
{
    public override void EnterState(GameManger gameManger)
    {
        Debug.Log("GameBattleState");
        
        //pass in Character Info
        

    }

    public override void Update(GameManger gameManger)
    {
        if (!gameManger.battleHasStarted)
        {

            SceneManager.LoadScene("Tut Forest");//OverWOrld
            gameManger.TransistinoToState(gameManger.OverWorldState);
        }
    }
}
