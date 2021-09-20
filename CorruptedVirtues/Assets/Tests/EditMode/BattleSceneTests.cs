using NUnit.Framework;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class BattleSceneTests
{
    public class InstantiateCharactersForBattle_Method
    {
        GameManger.AreaData _areaData;
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
            _battleSystem.EnemySlotContainer = new GameObject("testEnemySlotContainer");
            new GameObject("Slot1").transform.parent = _battleSystem.EnemySlotContainer.transform;
            new GameObject("FrontRow1").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(0).transform;
            new GameObject("BackRow1").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(0).transform;
            new GameObject("Slot2").transform.parent = _battleSystem.EnemySlotContainer.transform;
            new GameObject("FrontRow2").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(1).transform;
            new GameObject("BackRow2").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(1).transform;
            new GameObject("Slot3").transform.parent = _battleSystem.EnemySlotContainer.transform;
            new GameObject("FrontRow3").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(2).transform;
            new GameObject("BackRow3").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(2).transform;
            new GameObject("Slot4").transform.parent = _battleSystem.EnemySlotContainer.transform;
            new GameObject("FrontRow4").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(3).transform;
            new GameObject("BackRow4").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(3).transform;
            new GameObject("Slot5").transform.parent = _battleSystem.EnemySlotContainer.transform;
            new GameObject("FrontRow5").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(4).transform;
            new GameObject("BackRow5").transform.parent = _battleSystem.EnemySlotContainer.transform.GetChild(4).transform;

            //PlayerSlots
            _battleSystem.PlayerSlotContainer = new GameObject("testPlayerSlotContainer");
            new GameObject("Slot1").transform.parent = _battleSystem.PlayerSlotContainer.transform;
            new GameObject("FrontRow1").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(0).transform;
            new GameObject("BackRow1").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(0).transform;
            new GameObject("Slot2").transform.parent = _battleSystem.PlayerSlotContainer.transform;
            new GameObject("FrontRow2").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(1).transform;
            new GameObject("BackRow2").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(1).transform;
            new GameObject("Slot3").transform.parent = _battleSystem.PlayerSlotContainer.transform;
            new GameObject("FrontRow3").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(2).transform;
            new GameObject("BackRow3").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(2).transform;
            new GameObject("Slot4").transform.parent = _battleSystem.PlayerSlotContainer.transform;
            new GameObject("FrontRow4").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(3).transform;
            new GameObject("BackRow4").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(3).transform;
            new GameObject("Slot5").transform.parent = _battleSystem.PlayerSlotContainer.transform;
            new GameObject("FrontRow5").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(4).transform;
            new GameObject("BackRow5").transform.parent = _battleSystem.PlayerSlotContainer.transform.GetChild(4).transform;

            //Fill Enemy Data
            testBattleEnemy1 = new GameObject("testBattleEnemy1");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy1);
            testBattleEnemy2 = new GameObject("testBattleEnemy2");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy2);
            testBattleEnemy3 = new GameObject("testBattleEnemy3");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy3);
            testBattleEnemy4 = new GameObject("testBattleEnemy4");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy4);
            testBattleEnemy5 = new GameObject("testBattleEnemy5");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy5);
            testBossBattleEnemy = new GameObject("testBossBattleEnemy")
            {
                name = "Test Boss"
            };
            GameManger.gameManger.areaData.possibleEnemys.Add(testBossBattleEnemy);

            //Fill Party Team
            testBattleHero1 = new GameObject("testBattleHero1");
            GameManger.gameManger.party.PlayerParty.Add(testBattleHero1);
            testBattleHero2 = new GameObject("testBattleHero2");
            GameManger.gameManger.party.PlayerParty.Add(testBattleHero2);
            testBattleHero3 = new GameObject("testBattleHero3");
            GameManger.gameManger.party.PlayerParty.Add(testBattleHero3);
        }

        [Test]
        public void Instantiate_Boss()
        {
            GameManger.gameManger.bossBattle = true;
            GameManger.gameManger.EncounteredEnemyNames.Add(testBossBattleEnemy.name);
            _battleSystem.InstantiateCharactersForBattle();
            Assert.That(_battleSystem.EnemyCloneGameObjectsInBattle[2].name, Is.EqualTo(testBossBattleEnemy.name));
        }
        [Test]
        public void Instantiate_EnemySlot1_When_1_Enemy()
        {
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
            _battleSystem.InstantiateCharactersForBattle();
            Assert.That(_battleSystem.EnemyCloneGameObjectsInBattle[0].name, Is.EqualTo(testBattleEnemy1.name));
        }
        [Test]
        public void Instantiate_EnemySlot2_When_2_Enemies()
        {
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
            _battleSystem.InstantiateCharactersForBattle();
            Assert.That(_battleSystem.EnemyCloneGameObjectsInBattle[1].name, Is.EqualTo(testBattleEnemy2.name));
        }
        [Test]
        public void Instantiate_EnemySlot3_When_3_Enemies()
        {
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
            _battleSystem.InstantiateCharactersForBattle();
            Assert.That(_battleSystem.EnemyCloneGameObjectsInBattle[2].name, Is.EqualTo(testBattleEnemy3.name));
        }
        [Test]
        public void Instantiate_EnemySlot4_When_4_Enemies()
        {
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy4.name);
            _battleSystem.InstantiateCharactersForBattle();
            Assert.That(_battleSystem.EnemyCloneGameObjectsInBattle[3].name, Is.EqualTo(testBattleEnemy4.name));
        }
        [Test]
        public void Instantiate_EnemySlot5_When_5_Enemies()
        {
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy2.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy3.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy4.name);
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy5.name);
            _battleSystem.InstantiateCharactersForBattle();
            Assert.That(_battleSystem.EnemyCloneGameObjectsInBattle[4].name, Is.EqualTo(testBattleEnemy5.name));
        }

        [Test]
        public void Instantiate_3_PlayerSlots()
        {
            _battleSystem.InstantiateCharactersForBattle();
            Assert.That(_battleSystem.PlayerCloneGameObjectsInBattle[0].name, Is.EqualTo(testBattleHero1.name));
            Assert.That(_battleSystem.PlayerCloneGameObjectsInBattle[1].name, Is.EqualTo(testBattleHero2.name));
            Assert.That(_battleSystem.PlayerCloneGameObjectsInBattle[2].name, Is.EqualTo(testBattleHero3.name));
        }
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(testBattleEnemy1);
            Object.DestroyImmediate(testBattleEnemy2);
            Object.DestroyImmediate(testBattleEnemy3);
            Object.DestroyImmediate(testBattleEnemy4);
            Object.DestroyImmediate(testBattleEnemy5);
            Object.DestroyImmediate(testBossBattleEnemy);
            Object.DestroyImmediate(testBattleHero1);
            Object.DestroyImmediate(testBattleHero2);
            Object.DestroyImmediate(testBattleHero3);
            Object.DestroyImmediate(_battleSystem.EnemySlotContainer);
            Object.DestroyImmediate(_battleSystem.PlayerSlotContainer);
        }
    }
    public class PopulateCharactersInBattle_Method
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
            _battleSystem.statusText = new GameObject().AddComponent<Text>();
            _battleSystem.EnemyCloneGameObjectsInBattle = new GameObject[5];
            testBattleEnemy1 = new GameObject("testBattleEnemy1");
            testBattleEnemy1.AddComponent<CharacterStats>();
            testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy1);
            testBattleEnemy2 = new GameObject("testBattleEnemy2");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy2);
            testBattleEnemy3 = new GameObject("testBattleEnemy3");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy3);
            testBattleEnemy4 = new GameObject("testBattleEnemy4");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy4);
            testBattleEnemy5 = new GameObject("testBattleEnemy5");
            GameManger.gameManger.areaData.possibleEnemys.Add(testBattleEnemy5);
            testBossBattleEnemy = new GameObject("testBossBattleEnemy")
            {
                name = "Test Boss"
            };
            GameManger.gameManger.areaData.possibleEnemys.Add(testBossBattleEnemy);

            //Fill Party Team
            testBattleHero1 = new GameObject("testBattleHero1");
            GameManger.gameManger.party.PlayerParty.Add(testBattleHero1);
            testBattleHero2 = new GameObject("testBattleHero2");
            GameManger.gameManger.party.PlayerParty.Add(testBattleHero2);
            testBattleHero3 = new GameObject("testBattleHero3");
            GameManger.gameManger.party.PlayerParty.Add(testBattleHero3);
        }
        [Test]
        public void Single_Enemy_Is_First()
        {
            GameManger.gameManger.EncounteredEnemyNames.Add(testBattleEnemy1.name);
            _battleSystem.EnemyCloneGameObjectsInBattle[0] = testBattleEnemy1;
            _battleSystem.PopulateCharactersInBattle();
            Assert.AreEqual(_battleSystem.charactersInBattle.First().name, testBattleEnemy1.name);
        }
        [TearDown]
        public void AfterEveryTest()
        {
            
        }
    }
    public class DidEveryoneTakeATurn_Method
    {
        BattleSystem _battleSystem;
        GameObject testGo;
        GameObject testGo2;

        [SetUp]
        public void BeforeEveryTest()
        {
            _battleSystem = new GameObject().AddComponent<BattleSystem>();

            testGo = new GameObject("test");
            testGo.AddComponent<CharacterStats>();
            testGo.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            testGo.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;
            //_battleSystem.enemyGO1 = testGo;
        }
        [Test]
        public void Once_Everyone_Has_Gone_Reset_Alive_Characters()
        {
            _battleSystem.DidEveryoneTakeATurn();
            Assert.AreEqual(_battleSystem.DidEveryoneTakeATurn(), true);
        }
        [Test]
        public void If_Someone_Has_Not_Gone_Yet()
        {
            _battleSystem.DidEveryoneTakeATurn();
            Assert.AreEqual(_battleSystem.DidEveryoneTakeATurn(), false);
        }
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(testGo);
        }
    }
    public class WhosNext_Method
    {
        BattleSystem _battleSystem;
        GameObject testBattleHero1, testBattleEnemy1;

        [SetUp]
        public void BeforeEveryTest()
        {
            _battleSystem = new GameObject().AddComponent<BattleSystem>();
            _battleSystem.statusText = new GameObject().AddComponent<Text>();
        }
        [Test]
        public void Enemy_Is_Next()
        {
            BattleEnemyState enemyState = new BattleEnemyState();
            testBattleEnemy1 = new GameObject("testBattleEnemy1");
            testBattleEnemy1.AddComponent<CharacterStats>();
            testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            testBattleEnemy1.GetComponent<CharacterStats>().characterDefinition.Enemy = true;
            _battleSystem.charactersInBattle.Add(testBattleEnemy1);
            _battleSystem.WhosNext();
            Assert.AreEqual(_battleSystem.CurrentState, enemyState);
        }
        [Test]
        public void Player_Is_Next()
        {
            BattlePlayerState playerState = new BattlePlayerState();
            testBattleHero1 = new GameObject("testBattleHero1");
            testBattleHero1.AddComponent<CharacterStats>();
            testBattleHero1.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            testBattleHero1.GetComponent<CharacterStats>().characterDefinition.Enemy = false;
            _battleSystem.charactersInBattle.Add(testBattleHero1);
            _battleSystem.WhosNext();
            Assert.AreEqual(_battleSystem.CurrentState, playerState);
        }
        [Test]
        public void The_End_Is_Next()
        {
            BattleEndState endState = new BattleEndState();
            _battleSystem.WhosNext();
            Assert.AreEqual(_battleSystem.CurrentState, endState);
        }
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(_battleSystem);
        }
    }
    //public class DestroyEnemy_Method
    //{
    //    BattleSystem _battleSystem;
    //    GameObject testGo;

    //    [SetUp]
    //    public void BeforeEveryTest()
    //    {
    //        _battleSystem = new GameObject().AddComponent<BattleSystem>();
    //        testGo = new GameObject("test");
    //        testGo.AddComponent<CharacterStats>();
    //        testGo.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
    //        testGo.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;
    //        //_battleSystem.enemyGO1 = testGo;
    //    }
    //    [Test]
    //    public void An_Empty_List_Repopulates()
    //    {
    //        _battleSystem.DidEveryoneTakeATurn();
    //        Assert.AreEqual(_battleSystem.charactersInBattle.First(), testGo);
    //    }
    //    [TearDown]
    //    public void AfterEveryTest()
    //    {
    //        Object.DestroyImmediate(testGo);
    //    }
    //}
    //public class DestroyPlayer_Method : MonoBehaviour
    //{
    //    BattleSystem _battleSystem;
    //    GameObject testBattleHero1;

    //    [SetUp]
    //    public void BeforeEveryTest()
    //    {
    //        _battleSystem = new GameObject().AddComponent<BattleSystem>();
    //        _battleSystem.statusText = new GameObject().AddComponent<Text>();
    //        testBattleHero1 = new GameObject("testBattleHero1");
    //        testBattleHero1.AddComponent<CharacterStats>();
    //        testBattleHero1.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
    //        testBattleHero1.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;
    //        //_battleSystem.enemyGO1 = testGo;
    //    }
    //    [Test]
    //    public void Destroy_Player_In_Slot_X()
    //    {
    //        _battleSystem.PlayerPrefabsInBattle = new GameObject[3];
    //        _battleSystem.PlayerPrefabsInBattle[0] = testBattleHero1;
    //        GameObject PretendSpawnSpot = new GameObject();
    //        _battleSystem.PlayerCloneGameObjectsInBattle = new GameObject[3];
    //        _battleSystem.PlayerCloneGameObjectsInBattle[0] = Instantiate(testBattleHero1, PretendSpawnSpot.transform);
    //        _battleSystem.charactersInBattle.Add(_battleSystem.PlayerCloneGameObjectsInBattle[0]);
    //        _battleSystem.DestroyPlayer(0);

    //        Assert.AreEqual(_battleSystem.PlayerPrefabsInBattle[0], null);
    //        Assert.AreEqual(_battleSystem.charactersInBattle.Count, 0);
    //    }
    //    [TearDown]
    //    public void AfterEveryTest()
    //    {
    //        Object.DestroyImmediate(testBattleHero1);
    //    }
    //}
}
