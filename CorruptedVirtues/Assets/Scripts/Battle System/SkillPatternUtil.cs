using System.Linq;

public class SkillPatternUtil
{
    public void WhichSkillToUse(BattleSystem battleSystem, int EnemySlot, Skill_SO skill)
    {
        switch (skill.skillPattern)
        {
            case Skill_SO.SkillPattern.Single:
                SingleSlot(battleSystem, EnemySlot, skill);
                break;
            case Skill_SO.SkillPattern.Double:
                DoubleSlot(battleSystem, EnemySlot, skill);
                break;
            case Skill_SO.SkillPattern.DoubleEveryOther:
                DoubleEveryOtherSlot(battleSystem, EnemySlot, skill);
                break;
            case Skill_SO.SkillPattern.Triple:
                TripleSlot(battleSystem, EnemySlot, skill);
                break;
            case Skill_SO.SkillPattern.TripleEveryOther:
                TripleEveryOtherSlot(battleSystem, EnemySlot, skill);
                break;
            case Skill_SO.SkillPattern.Quad:
                QuadSlot(battleSystem, EnemySlot, skill);
                break;
            case Skill_SO.SkillPattern.Quad2X2Slot:
                Quad2X2Slot(battleSystem, EnemySlot, skill);
                break;
            case Skill_SO.SkillPattern.Penta:
                PentaSlot(battleSystem, EnemySlot, skill);
                break;
            default:
                break;
        }
    }

    public void AttackEnemyWithSkill(BattleSystem battleSystem, int EnemySlot, Skill_SO skill)
    {
        if (battleSystem.EnemiesInBattle[EnemySlot] != null)
        {
            CharacterStats Enemy = battleSystem.EnemiesInBattle[EnemySlot].GetComponent<CharacterStats>();
            int damage = GetDamageType(battleSystem, skill) + skill.skillAmout;
            Enemy.TakeDamage(damage);
        }
    }

    public static int GetDamageType(BattleSystem battleSystem, Skill_SO skill)
    {
        int PlayerDamage;
        switch (skill.skillType)
        {
            case Skill_SO.SkillType.ATK:
                PlayerDamage = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.currentAttack;
                break;
            case Skill_SO.SkillType.SPATK:
                PlayerDamage = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.currentSpecialAttack;
                break;
            default:
                PlayerDamage = 0;
                break;
        }

        return PlayerDamage;
    }

    /*
    [ ][ ][ ][ ][ ]
    [ ][ ][X][ ][ ]
    */
    public void SingleSlot(BattleSystem battleSystem, int slotSelected, Skill_SO skill)
    {
        AttackEnemyWithSkill(battleSystem, slotSelected, skill);
    }
    /*
    [ ][ ][ ][ ][ ]
    [ ][ ][X][X][ ]
    */
    public void DoubleSlot(BattleSystem battleSystem, int slotSelected, Skill_SO skill)
    {
        for (int i = slotSelected; i <= slotSelected + 1; i++)
        {
            AttackEnemyWithSkill(battleSystem, i, skill);
        }
    }
    /*
    [ ][ ][ ][ ][ ]
    [ ][X][ ][X][ ]
    */
    public void DoubleEveryOtherSlot(BattleSystem battleSystem, int slotSelected, Skill_SO skill)
    {
        AttackEnemyWithSkill(battleSystem, slotSelected, skill);
        AttackEnemyWithSkill(battleSystem, slotSelected + 2, skill);
    }
    /*
    [ ][ ][ ][ ][ ]
    [ ][X][X][X][ ]
    */
    public void TripleSlot(BattleSystem battleSystem, int slotSelected, Skill_SO skill)
    {
        for (int i = slotSelected; i < slotSelected + 3; i++)
        {
            AttackEnemyWithSkill(battleSystem, i, skill);
        }
    }
    /*
    [ ][ ][ ][ ][ ]
    [X][ ][X][ ][X]
    */
    public void TripleEveryOtherSlot(BattleSystem battleSystem, int slotSelected, Skill_SO skill)
    {
        for (int i = slotSelected; i < slotSelected + 5; i++)
        {
            if (i == slotSelected || i == slotSelected + 2 || i == slotSelected + 4)
            {
                AttackEnemyWithSkill(battleSystem, i, skill);
            }
        }
    }
    /*
    [ ][ ][ ][ ][ ]
    [X][X][X][X][ ]
    */
    public void QuadSlot(BattleSystem battleSystem, int slotSelected, Skill_SO skill)
    {
        for (int i = slotSelected; i < slotSelected + 4; i++)
        {
            AttackEnemyWithSkill(battleSystem, i, skill);
        }
    }
    /*
    [ ][ ][ ][ ][ ]
    [X][X][ ][X][X]
    */
    public void Quad2X2Slot(BattleSystem battleSystem, int slotSelected, Skill_SO skill)
    {
        for (int i = slotSelected; i < slotSelected + 5; i++)
        {
            if (i != slotSelected + 2)
            {
                AttackEnemyWithSkill(battleSystem, i, skill);
            }
        }
    }
    /*
    [ ][ ][ ][ ][ ]
    [X][X][X][X][X]
    */
    public void PentaSlot(BattleSystem battleSystem, int slotSelected, Skill_SO skill)
    {
        for (int i = slotSelected; i < slotSelected + 5; i++)
        {
            AttackEnemyWithSkill(battleSystem, i, skill);
        }
    }
}
