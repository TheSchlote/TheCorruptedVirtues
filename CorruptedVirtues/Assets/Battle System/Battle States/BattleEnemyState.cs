using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleEnemyState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EnemyState");
    }

    public override void Update(BattleSystem battleSystem)
    {
        Debug.Log("Enemy Attacks!");
        battleSystem.Player.TakeDamage(battleSystem.Enemy.characterDefinition.currentAttack);
        Debug.Log("Player Health: " + battleSystem.Player.characterDefinition.currentHealth);

        if (battleSystem.Player.characterDefinition.currentHealth <= 0)
        {
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            battleSystem.TransitionToState(battleSystem.playerState);
        }
    }
}
