using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BattleEnemyState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EnemyState");
        //Whos turn is it?
        if (battleSystem.charactersInBattle.Count == 0)
        {
            battleSystem.PopulateCharactersInBattle();
        }
        else
        {
            EnemyTurnAction(battleSystem);
            battleSystem.WhosNext();
        }
    }

    public override void Update(BattleSystem battleSystem)
    {


    }

    private static void EnemyTurnAction(BattleSystem battleSystem)
    {
        CharacterStats Enemy = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>();

        int PlayerSlot = Random.Range(0, 3);
        if(battleSystem.PlayerPrefabsInBattle[PlayerSlot] == null)
        {
            Debug.Log("You Dummy! Player in slot " + PlayerSlot + " is already dead! Turn Skipped");
            battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
            return;
        }
        CharacterStats Player = battleSystem.PlayerPrefabsInBattle[PlayerSlot].GetComponent<CharacterStats>();
        

        Debug.Log(battleSystem.charactersInBattle.First().name + " Attacks!");
        Player.TakeDamage(Enemy.characterDefinition.currentAttack);
        Debug.Log(Player.name + " Health: " + Player.characterDefinition.currentHealth);

        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
        battleSystem.DidEveryoneTakeATurn();

        if (Player.characterDefinition.currentHealth <= 0)
            battleSystem.DestroyPlayer(PlayerSlot);

        if (battleSystem.AreAllPlayerDead())
        {
            //Destory player on death
            //check to see if other player characters are alive
            //clear list probably
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            return;
        }
    }
}
