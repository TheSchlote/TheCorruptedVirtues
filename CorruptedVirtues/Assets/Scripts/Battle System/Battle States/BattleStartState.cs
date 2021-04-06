using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BattleStartState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("StartState");

        //CharacterStats Player = battleSystem.PlayerPrefab1.GetComponent<CharacterStats>();
        //CharacterStats Enemy = battleSystem.EnemyPrefab1.GetComponent<CharacterStats>();
        if (battleSystem.charactersInBattle.First().name == "Player(Clone)")
        {
            battleSystem.TransitionToState(battleSystem.playerState);
        }
        else
        {
            battleSystem.TransitionToState(battleSystem.enemyState);
        }
    } 

    public override void Update(BattleSystem battleSystem)
    {        
    }
}
