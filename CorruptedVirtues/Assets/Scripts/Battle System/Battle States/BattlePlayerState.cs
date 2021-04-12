using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BattlePlayerState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log(battleSystem.charactersInBattle.First().name + "'s PlayerState - who do you want to attack?!");
    }

    public override void Update(BattleSystem battleSystem)
    {    
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            Debug.Log("Slot1 Attacked!");
            AttackEnemy(battleSystem, 1);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            Debug.Log("Slot2 Attacked!");
            AttackEnemy(battleSystem, 2);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            Debug.Log("Slot3 Attacked!");
            AttackEnemy(battleSystem, 3);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            Debug.Log("Slot4 Attacked!");
            AttackEnemy(battleSystem, 4);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            Debug.Log("Slot5 Attacked!");
            AttackEnemy(battleSystem, 5);
        }
    }

    private static void AttackEnemy(BattleSystem battleSystem, int EnemySlot)
    {
        //Use current Player Character
        CharacterStats Player = battleSystem.PlayerPrefab1.GetComponent<CharacterStats>();
        CharacterStats Enemy;
        if (battleSystem.EnemyPrefabsInBattle[EnemySlot - 1] != null)
        {
            Enemy = battleSystem.EnemyPrefabsInBattle[EnemySlot-1].GetComponent<CharacterStats>();
        }
        else
        {
            Debug.Log("This Enemy in slot " + EnemySlot + " is already dead!");
            return;
        }

        Enemy.TakeDamage(Player.characterDefinition.currentAttack);
        Debug.Log(Enemy.name + " Health: " + Enemy.characterDefinition.currentHealth);

        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
        battleSystem.DidEveryoneTakeATurn();

        if (Enemy.characterDefinition.currentHealth <= 0)
            battleSystem.DestroyEnemy(EnemySlot);

        if (battleSystem.AreAllEnemiesDead())
        { 
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            battleSystem.WhosNext();
        }
    }
}
