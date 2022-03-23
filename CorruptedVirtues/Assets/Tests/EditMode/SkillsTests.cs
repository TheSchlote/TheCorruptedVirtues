using NUnit.Framework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkillsTests : MonoBehaviour
{
    BattleSystem _battleSystem;
    GameObject testBattleEnemy1, testBattleEnemy2, testBattleEnemy3, testBattleEnemy4, testBattleEnemy5, testBossBattleEnemy;
    GameObject testBattleHero1, testBattleHero2, testBattleHero3;

    [SetUp]
    public void BeforeEveryTest()
    {
        GameManger.gameManger = new GameObject().AddComponent<GameManger>();
        GameManger.gameManger.areaData = new GameManger.AreaData();
        GameManger.gameManger.party = new GameManger.PartyData();
        _battleSystem = new GameObject().AddComponent<BattleSystem>();

        //EnemySlots
        //_battleSystem.EnemySlotContainer = new GameObject("testEnemySlotContainer");
        //new GameObject("Slot1").transform.parent = _battleSystem.EnemySlotContainer.transform;
        //new GameObject("FrontRow1").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(0).transform;
        //new GameObject("BackRow1").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(0).transform;
        //new GameObject("Slot2").transform.parent = _battleSystem.EnemySlotContainer.transform;
        //new GameObject("FrontRow2").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(1).transform;
        //new GameObject("BackRow2").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(1).transform;
        //new GameObject("Slot3").transform.parent = _battleSystem.EnemySlotContainer.transform;
        //new GameObject("FrontRow3").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(2).transform;
        //new GameObject("BackRow3").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(2).transform;
        //new GameObject("Slot4").transform.parent = _battleSystem.EnemySlotContainer.transform;
        //new GameObject("FrontRow4").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(3).transform;
        //new GameObject("BackRow4").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(3).transform;
        //new GameObject("Slot5").transform.parent = _battleSystem.EnemySlotContainer.transform;
        //new GameObject("FrontRow5").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(4).transform;
        //new GameObject("BackRow5").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(4).transform;

        ////PlayerSlots
        //_battleSystem.PlayerSlotContainer = new GameObject("testPlayerSlotContainer");
        //new GameObject("Slot1").transform.parent = _battleSystem.PlayerSlotContainer.transform;
        //new GameObject("FrontRow1").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(0).transform;
        //new GameObject("BackRow1").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(0).transform;
        //new GameObject("Slot2").transform.parent = _battleSystem.PlayerSlotContainer.transform;
        //new GameObject("FrontRow2").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(1).transform;
        //new GameObject("BackRow2").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(1).transform;
        //new GameObject("Slot3").transform.parent = _battleSystem.PlayerSlotContainer.transform;
        //new GameObject("FrontRow3").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(2).transform;
        //new GameObject("BackRow3").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(2).transform;
        //new GameObject("Slot4").transform.parent = _battleSystem.PlayerSlotContainer.transform;
        //new GameObject("FrontRow4").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(3).transform;
        //new GameObject("BackRow4").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(3).transform;
        //new GameObject("Slot5").transform.parent = _battleSystem.PlayerSlotContainer.transform;
        //new GameObject("FrontRow5").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(4).transform;
        //new GameObject("BackRow5").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(4).transform;

        //Fill Enemy Data
        testBattleEnemy1 = new GameObject("testBattleEnemy1");
        testBattleEnemy1.AddComponent<CharacterStats>();
        testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
        testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 0;
        testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth = 10;
        testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.maxHealth = 10;
        GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy1);
        testBattleEnemy2 = new GameObject("testBattleEnemy2");
        testBattleEnemy2.AddComponent<CharacterStats>();
        testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
        testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 0;
        testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentHealth = 10;
        testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.maxHealth = 10;
        GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy2);
        testBattleEnemy3 = new GameObject("testBattleEnemy3");
        testBattleEnemy3.AddComponent<CharacterStats>();
        testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
        testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 0;
        testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.currentHealth = 10;
        testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.maxHealth = 10;
        GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy3);
        testBattleEnemy4 = new GameObject("testBattleEnemy4");
        testBattleEnemy4.AddComponent<CharacterStats>();
        testBattleEnemy4.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
        testBattleEnemy4.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 0;
        testBattleEnemy4.GetComponent<CharacterStats>().characterDefinition.currentHealth = 10;
        testBattleEnemy4.GetComponent<CharacterStats>().characterDefinition.maxHealth = 10;
        GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy4);
        testBattleEnemy5 = new GameObject("testBattleEnemy5");
        testBattleEnemy5.AddComponent<CharacterStats>();
        testBattleEnemy5.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
        testBattleEnemy5.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 0;
        testBattleEnemy5.GetComponent<CharacterStats>().characterDefinition.currentHealth = 10;
        testBattleEnemy5.GetComponent<CharacterStats>().characterDefinition.maxHealth = 10;
        GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy5);
        testBossBattleEnemy = new GameObject("testBossBattleEnemy")
        {
            name = "Test Boss"
        };
        GameManger.gameManger.areaData.possibleEnemys.Add(testBossBattleEnemy);

        //Fill Party Team
        testBattleHero1 = new GameObject("testBattleHero1");
        testBattleHero1.AddComponent<CharacterStats>();
        testBattleHero1.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
        testBattleHero1.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;
        testBattleHero1.GetComponent<CharacterStats>().characterDefinition.Enemy = false;
        GameManger.gameManger.party.PlayerParty.Add(testBattleHero1);
        //testBattleHero2 = new GameObject("testBattleHero2");
        //testBattleHero2.AddComponent<CharacterStats>();
        //testBattleHero2.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
        //testBattleHero2.GetComponent<CharacterStats>().characterDefinition.currentSpeed = ;
        //GameManger.gameManger.party.PlayerParty.Add(testBattleHero2);
        //testBattleHero3 = new GameObject("testBattleHero3");
        //testBattleHero3.AddComponent<CharacterStats>();
        //testBattleHero3.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
        //testBattleHero3.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;
        //GameManger.gameManger.party.PlayerParty.Add(testBattleHero3);
    }


    [Test]
    public void UseSkillTest()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);

    }
    [Test]
    public void SkillPatternSingle()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillPattern = Skill_SO.SkillPattern.Single;
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);

    }
    [Test]
    public void SkillPatternDouble()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillPattern = Skill_SO.SkillPattern.Double;
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
    }

    [Test]
    public void SkillPatternDoubleEveryOtherSlot()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillPattern = Skill_SO.SkillPattern.DoubleEveryOther;
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentHealth, 10);
        Assert.AreEqual(testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
    }

    [Test]
    public void SkillPatternTripleSlot()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillPattern = Skill_SO.SkillPattern.Triple;
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
    }
    [Test]
    public void SkillPatternTripleEveryOtherSlot()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy4.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy5.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillPattern = Skill_SO.SkillPattern.TripleEveryOther;
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentHealth, 10);
        Assert.AreEqual(testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy4.GetComponent<CharacterStats>().characterDefinition.currentHealth, 10);
        Assert.AreEqual(testBattleEnemy5.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
    }
    [Test]
    public void SkillPatternQuadSlot()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy4.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy5.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillPattern = Skill_SO.SkillPattern.Quad;
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy4.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy5.GetComponent<CharacterStats>().characterDefinition.currentHealth, 10);
    }
    [Test]
    public void SkillPatternQuad2X2SlotSlot()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy4.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy5.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillPattern = Skill_SO.SkillPattern.Quad2X2Slot;
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.currentHealth, 10);
        Assert.AreEqual(testBattleEnemy4.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy5.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
    }
    [Test]
    public void SkillPatternPentaSlot()
    {
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy4.name);
        GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy5.name);
        //_battleSystem.InstantiateCharactersForBattle();
        _battleSystem.startState.PopulatePrefabsInBattle(_battleSystem);
        _battleSystem.startState.PopulateCharactersInBattle(_battleSystem);

        Skill_SO testSkill = ScriptableObject.CreateInstance<Skill_SO>();
        testSkill.skillPattern = Skill_SO.SkillPattern.Penta;
        testSkill.skillAmout = 10;

        _battleSystem.playerState.UseSkill(_battleSystem, 1, testSkill);

        Assert.AreEqual(testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy2.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy3.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy4.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
        Assert.AreEqual(testBattleEnemy5.GetComponent<CharacterStats>().characterDefinition.currentHealth, 0);
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