using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleEndState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EndState");
        CharacterStats Player = battleSystem.PlayerPrefab1.GetComponent<CharacterStats>();
        //CharacterStats Enemy = battleSystem.EnemyPrefab1.GetComponent<CharacterStats>();
        if (Player.characterDefinition.currentHealth <= 0)
        {
            Debug.Log("Enemy Wins :(");
        }
        else
        {
            Debug.Log("Player Wins! :D");
            Debug.Log(Player.name + " gained 100 XP!");
            Player.GainExperience(100);
            Debug.Log( Player.name + " Leveled up! ");
        }
    }

    public override void Update(BattleSystem battleSystem)
    {
        
    }
}
