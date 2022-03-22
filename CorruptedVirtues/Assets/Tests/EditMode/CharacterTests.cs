using NUnit.Framework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterTests : MonoBehaviour
{
    [SetUp]
    public void BeforeEveryTest()
    {

    }

    [Test]
    public void Add_Skill_To_Character()
    {
        CharacterStats_SO testCharacter = ScriptableObject.CreateInstance<CharacterStats_SO>();
        testCharacter.baseSpecialAttack = 10;
        testCharacter.currentSpecialAttack = 10;
        testCharacter.baseSpecialDefense = 15;
        testCharacter.currentSpecialDefense = 15;
        Assert.AreEqual(testCharacter.baseSpecialAttack, 10);
        Assert.AreEqual(testCharacter.currentSpecialAttack, 10);
        Assert.AreEqual(testCharacter.baseSpecialDefense, 15);
        Assert.AreEqual(testCharacter.currentSpecialDefense, 15);
    }
}
