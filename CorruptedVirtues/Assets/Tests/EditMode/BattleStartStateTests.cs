using NUnit.Framework;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class BattleStartStateTests : MonoBehaviour
{
    public class PopulatePrefabsInBattle_Method
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
            //_battleSystem.PopulateCharactersInBattle();
            Assert.AreEqual(_battleSystem.charactersInBattle.First().name, testBattleEnemy1.name);
        }
        [TearDown]
        public void AfterEveryTest()
        {

        }
    }
    public class PopulateCharactersInBattle_Method { }
    public class ResetCharactersHealthToFull_Method { }
    public class GiveCharactersInBattleHealthbars_Method { }
}
