using NUnit.Framework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillsTests : MonoBehaviour
{
    [SetUp]
    public void BeforeEveryTest()
    {
    }

    [Test]
    public void Add_Skill_To_Character()
    {
        CharacterStats_SO testCharacter = ScriptableObject.CreateInstance<CharacterStats_SO>();
        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testCharacter.SkillList.Add(testSkill);
        Assert.AreEqual(testCharacter.SkillList.Count, 1);
    }
    [Test]
    public void Skill_Has_Name()
    {
        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillName = "Test";
        Assert.AreEqual(testSkill.skillName, "Test");
    }
    [Test]
    public void Skill_Has_Amout()
    {
        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillAmout = 10;
        Assert.AreEqual(testSkill.skillAmout, 10);
    }
}
