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
        CharacterStats Player = battleSystem.PlayerPrefab1.GetComponent<CharacterStats>();
        CharacterStats Enemy = battleSystem.EnemyPrefab1.GetComponent<CharacterStats>();
        Debug.Log("Enemy Attacks!");
        Player.TakeDamage(Enemy.characterDefinition.currentAttack);
        Debug.Log("Player Health: " + Player.characterDefinition.currentHealth);

        if (Player.characterDefinition.currentHealth <= 0)
        {
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            battleSystem.TransitionToState(battleSystem.playerState);
        }
    }
}
