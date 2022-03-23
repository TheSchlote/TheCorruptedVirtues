using NUnit.Framework;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class BattleWhosNextStateTests : MonoBehaviour
{
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
            //_battleSystem.EnemyCloneGameObjectsInBattle = new GameObject[5];
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
            //_battleSystem.EnemyCloneGameObjectsInBattle[0] = testBattleEnemy1;
            //_battleSystem.PopulateCharactersInBattle();
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
            //_battleSystem.DidEveryoneTakeATurn();
            //Assert.AreEqual(_battleSystem.DidEveryoneTakeATurn(), true);
        }
        [Test]
        public void If_Someone_Has_Not_Gone_Yet()
        {
            //_battleSystem.DidEveryoneTakeATurn();
            //Assert.AreEqual(_battleSystem.DidEveryoneTakeATurn(), false);
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
            //_battleSystem.WhosNext();
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
            //_battleSystem.WhosNext();
            Assert.AreEqual(_battleSystem.CurrentState, playerState);
        }
        [Test]
        public void The_End_Is_Next()
        {
            BattleEndState endState = new BattleEndState();
            //_battleSystem.WhosNext();
            Assert.AreEqual(_battleSystem.CurrentState, endState);
        }
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(_battleSystem);
        }
    }
}
