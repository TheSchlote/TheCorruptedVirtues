using UnityEngine;

[CreateAssetMenu(fileName = "New Skill", menuName = "Skill/NewSkill")]
public class Skill_SO : ScriptableObject
{
    public string skillName;
    public string damageType;
    public int skillAmout;
    public int MPCost;
    public int range;
}
