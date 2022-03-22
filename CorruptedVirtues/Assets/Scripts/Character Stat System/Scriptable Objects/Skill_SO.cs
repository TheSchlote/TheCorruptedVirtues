using UnityEngine;

[CreateAssetMenu(fileName = "New Skill", menuName = "Skill/NewSkill")]

public class Skill_SO : ScriptableObject
{
    public enum SkillPattern { Single, Double, DoubleEveryOther, Triple, TripleEveryOther, Quad, Quad2X2Slot, Penta, I, J, K }
    public enum SkillType { ATK, SPATK }
    public string skillName;
    public SkillType skillType;
    public int skillAmout; //Damage or healing
    public int MPCost;
    public SkillPattern skillPattern;

}
