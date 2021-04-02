using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattlePlayerState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("PlayerState");
    }

    public override void Update(BattleSystem battleSystem)
    {
        if (Input.GetKeyDown("space"))
        {
            Debug.Log("Player Attacks!");
            battleSystem.Enemy.TakeDamage(battleSystem.Player.characterDefinition.currentAttack);
            Debug.Log("Enemy Health: " + battleSystem.Enemy.characterDefinition.currentHealth);

            if(battleSystem.Enemy.characterDefinition.currentHealth <= 0)
            {
                battleSystem.TransitionToState(battleSystem.endState);
            }
            else
            {
                battleSystem.TransitionToState(battleSystem.enemyState);
            }
        }
    }
}
