using System.Linq;

public class BattlePlayerState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        //wait for input
    }

    public override void Update(BattleSystem battleSystem)
    {
        if (battleSystem.attackSlot != 0)
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
        
        if (battleSystem.EnemiesInBattle[EnemySlot - 1] != null)
        {
            Enemy = battleSystem.EnemiesInBattle[EnemySlot - 1].GetComponent<CharacterStats>();
        }
        else
        {
            battleSystem.attackSlot = 0;
            return;
        }

        Enemy.TakeDamage(Player.characterDefinition.currentAttack);

        //Make this a funciton on character Death
        if (Enemy.characterDefinition.currentHealth <= 0)
        {
            foreach (Quest_SO quest in GameManger.gameManger.ActiveQuests)
            {
                quest.IsQuestEnemy(battleSystem.EnemiesInBattle[EnemySlot - 1]);
            }
            //battleSystem.DestroyEnemy(EnemySlot);
            battleSystem.TotalEnemyXP += Enemy.characterDefinition.charExperience;
        }

        EndOfPlayersTurn(battleSystem);
    }

    public void UseSkill(BattleSystem battleSystem, int EnemySlot, Skill_SO skill)
    {
        SkillPatternUtil skillPattern = new SkillPatternUtil();
        skillPattern.WhichSkillToUse(battleSystem, EnemySlot, skill);
        //EndOfPlayersTurn(battleSystem);
    }

    public void EndOfPlayersTurn(BattleSystem battleSystem)
    {
        battleSystem.attack = false;
        battleSystem.attackSlot = 0;
        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
        battleSystem.TransitionToState(battleSystem.whosNextState);
    }
}
