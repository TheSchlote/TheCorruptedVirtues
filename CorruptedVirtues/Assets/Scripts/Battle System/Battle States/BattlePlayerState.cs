using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class BattlePlayerState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        battleSystem.statusText.text += $"\n{battleSystem.charactersInBattle.First().name}'s Turn";
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
        //battleSystem.statusText.text += $"\nSlot {EnemySlot} Attacked!";
        CharacterStats Player = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>();
        CharacterStats Enemy;
        CharacterStats EnemyOnScreen;

        if (battleSystem.EnemyPrefabsInBattle[EnemySlot - 1] != null)
        {
            Enemy = battleSystem.EnemyPrefabsInBattle[EnemySlot - 1].GetComponent<CharacterStats>();
            EnemyOnScreen = battleSystem.EnemyCloneGameObjectsInBattle[EnemySlot - 1].GetComponent<CharacterStats>();
        }
        else
        {
            battleSystem.statusText.text += $"\nThis Enemy in slot {EnemySlot} is already dead!";
            return;
        }

        Enemy.TakeDamage(Player.characterDefinition.currentAttack);
        EnemyOnScreen.healthbar.SetHeatlh(Enemy.characterDefinition);
        //battleSystem.statusText.text += $"\n{Enemy.name} Health: {Enemy.characterDefinition.currentHealth}";

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
        for (int i = 0; i < 5; i++)
        {
            if (battleSystem.EnemyPrefabsInBattle[i] != null)
            {
                return false;
            }
        }
        return true;
    }
}
