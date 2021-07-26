using UnityEngine;

public class BattleStartState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("StartState");
        battleSystem.WhosNext();
    } 

    public override void Update(BattleSystem battleSystem)
    {        
    }
}
