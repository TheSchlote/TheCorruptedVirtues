using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleStartState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("StartState");
    }

    public override void Update(BattleSystem battleSystem)
    {
        //See who is faster
        //grab speed of all characters in battle and sort them by speed

        //for now player goes first.
        battleSystem.TransitionToState(battleSystem.playerState);
    }
}
