using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleEndState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EndState");
    }

    public override void Update(BattleSystem battleSystem)
    {
        if(battleSystem.Player.characterDefinition.currentHealth <= 0)
        {
            EnemyWins();
        }
        else
        {
            PlayerWins();
        }
    }

    private void PlayerWins()
    {
        Debug.Log("Player Wins! :D");
    }

    private void EnemyWins()
    {
        Debug.Log("Enemy Wins :(");
    }
}
