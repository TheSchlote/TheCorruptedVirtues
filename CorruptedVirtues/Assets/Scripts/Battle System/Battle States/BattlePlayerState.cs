using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class BattlePlayerState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Image PlayerProfile = battleSystem.PlayerChoiceButtons.transform.GetChild(2).GetComponent<Image>();
        SpriteRenderer PlayersProfile = battleSystem.charactersInBattle.First().transform.GetChild(2).GetChild(1).gameObject.GetComponent<SpriteRenderer>();
        PlayerProfile.sprite = PlayersProfile.sprite;
        Text PlayerName = battleSystem.PlayerChoiceButtons.transform.GetChild(2).GetChild(0).GetComponent<Text>();
        PlayerName.text = battleSystem.charactersInBattle.First().name;
        battleSystem.statusText.text += $"\n{battleSystem.charactersInBattle.First().name}'s Turn";
        battleSystem.PlayerChoiceButtons.SetActive(true);
        battleSystem.EnemyAttackButtons.SetActive(false);
    }

    public override void Update(BattleSystem battleSystem)
    {
        if (battleSystem.attack)
        {
            battleSystem.PlayerChoiceButtons.SetActive(false);
            battleSystem.EnemyAttackButtons.SetActive(true);
        }

        if(battleSystem.attackSlot != 0)
        {
            AttackEnemy(battleSystem, battleSystem.attackSlot);
        }

        if (battleSystem.flee)
        {
            battleSystem.TransitionToState(battleSystem.endState);
        }
    }

    public void AttackEnemy(BattleSystem battleSystem, int EnemySlot)
    {
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
            battleSystem.attackSlot = 0;
            return;
        }

        Enemy.TakeDamage(Player.characterDefinition.currentAttack);
        EnemyOnScreen.healthbar.SetHeatlh(Enemy.characterDefinition);

        //Make this a funciton on character Death
        if (Enemy.characterDefinition.currentHealth <= 0)
        {
            battleSystem.DestroyEnemy(EnemySlot);
            battleSystem.TotalEnemyXP += Enemy.characterDefinition.charExperience;
        }

        EndOfPlayersTurn(battleSystem);
    }

    public void EndOfPlayersTurn(BattleSystem battleSystem)
    {
        battleSystem.attack = false;
        battleSystem.attackSlot = 0;
        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
        battleSystem.TransitionToState(battleSystem.whosNextState);
    }
}
