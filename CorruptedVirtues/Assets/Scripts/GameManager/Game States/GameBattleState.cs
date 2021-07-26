using UnityEngine;

public class GameBattleState : GameBaseState
{
    public override void EnterState(GameManger gameManger)
    {
        Debug.Log("GameBattleState");
        
        //pass in Character Info
        

    }

    public override void Update(GameManger gameManger)
    {
        //BattleSystem handles this

        //Get out of State
    }
}
