using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BattleEnemyState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EnemyState");
    }

    public override void Update(BattleSystem battleSystem)
    {
        //Whos turn is it?
        if (battleSystem.charactersInBattle.Count == 0)
        {
            battleSystem.PopulateCharactersInBattle();
        }
        else
        {
            EnemyTurnAction(battleSystem);
        }

    }

    private static void EnemyTurnAction(BattleSystem battleSystem)
    {
        CharacterStats Enemy = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>();

        CharacterStats Player = battleSystem.PlayerPrefab1.GetComponent<CharacterStats>();

        Debug.Log(battleSystem.charactersInBattle.First().name + " Attacks!");
        Player.TakeDamage(Enemy.characterDefinition.currentAttack);
        Debug.Log("Player Health: " + Player.characterDefinition.currentHealth);

        //remove character after their turn is over
        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
        battleSystem.DidEveryoneTakeATurn();

        if (Player.characterDefinition.currentHealth <= 0)
        {
            //clear list probably
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            battleSystem.WhosNext();
        }
    }
}
