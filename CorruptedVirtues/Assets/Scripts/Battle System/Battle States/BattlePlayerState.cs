using UnityEngine;
using System.Linq;

public class BattlePlayerState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log($"{battleSystem.charactersInBattle.First().name}'s PlayerState - who do you want to attack?!");
    }

    public override void Update(BattleSystem battleSystem)
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            AttackEnemy(battleSystem, 1);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            AttackEnemy(battleSystem, 2);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            AttackEnemy(battleSystem, 3);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            AttackEnemy(battleSystem, 4);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            AttackEnemy(battleSystem, 5);
        }
    }

    public void AttackEnemy(BattleSystem battleSystem, int EnemySlot)
    {
        Debug.Log($"Slot {EnemySlot} Attacked!");
        CharacterStats Player = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>();
        CharacterStats Enemy;

        if (battleSystem.EnemyPrefabsInBattle[EnemySlot - 1] != null)
        {
            Enemy = battleSystem.EnemyPrefabsInBattle[EnemySlot - 1].GetComponent<CharacterStats>();
        }
        else
        {
            Debug.Log($"This Enemy in slot {EnemySlot} is already dead!");
            return;
        }

        Enemy.TakeDamage(Player.characterDefinition.currentAttack);
        Debug.Log($"{Enemy.name} Health: {Enemy.characterDefinition.currentHealth}");

        if (Enemy.characterDefinition.currentHealth <= 0)
        {
            battleSystem.DestroyEnemy(EnemySlot);
            battleSystem.TotalEnemyXP += Enemy.characterDefinition.charExperience;
        }

        EndOfPlayersTurn(battleSystem);
    }

    public void EndOfPlayersTurn(BattleSystem battleSystem)
    {
        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
        battleSystem.DidEveryoneTakeATurn();

        if (AreAllEnemiesDead(battleSystem))
        {
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            battleSystem.WhosNext();
        }
    }

    public bool AreAllEnemiesDead(BattleSystem battleSystem)
    {
        for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
        {
            if (battleSystem.EnemyPrefabsInBattle[i] != null)
            {
                return false;
            }
        }
        return true;
    }
}
