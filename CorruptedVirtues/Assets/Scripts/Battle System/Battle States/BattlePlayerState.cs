using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BattlePlayerState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("PlayerState - who do you want to attack?!");
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
        CharacterStats Player = battleSystem.PlayerPrefab1.GetComponent<CharacterStats>();
        CharacterStats Enemy = null;
        switch (EnemySlot) 
        {
            case 1:
                Enemy = battleSystem.EnemyPrefab1.GetComponent<CharacterStats>();
                break;
            case 2:
                Enemy = battleSystem.EnemyPrefab2.GetComponent<CharacterStats>();
                break;
            case 3:
                Enemy = battleSystem.EnemyPrefab3.GetComponent<CharacterStats>();
                break;
            case 4:
                Enemy = battleSystem.EnemyPrefab4.GetComponent<CharacterStats>();
                break;
            case 5:
                Enemy = battleSystem.EnemyPrefab5.GetComponent<CharacterStats>();
                break;
        }

        Enemy.TakeDamage(Player.characterDefinition.currentAttack);
        Debug.Log(Enemy.name + " Health: " + Enemy.characterDefinition.currentHealth);

        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
        battleSystem.DidEveryoneTakeATurn();

        if (Enemy.characterDefinition.currentHealth <= 0)
        {
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            battleSystem.WhosNext();
        }
    }
}
