using NUnit.Framework;
using UnityEngine;
using System.Linq;

public class BattleSceneTests
{
    public class InstantiateCharactersForBattle_Method
    {
        BattleSystem _battleSystem;
        GameObject testGo;
        GameObject go;

        [SetUp]
        public void BeforeEveryTest()
        {
            _battleSystem = new GameObject().AddComponent<BattleSystem>();
            testGo = new GameObject("test");
            go = Object.Instantiate(testGo, Vector3.zero, Quaternion.identity);
        }
        //[Test]
        //public void Set_EnemyPrefab1_To_testGO()
        //{
        //    _battleSystem.EnemyPrefab1 = testGo;
        //    Assert.AreEqual(_battleSystem.EnemyPrefab1, testGo);
        //}

        //[Test]
        //public void If_EnemyPrefab1_IsNull_enemyGO1_IsNull()
        //{
        //    _battleSystem.EnemyPrefab1 = null;
        //    _battleSystem.InstantiateCharactersForBattle();
        //    Assert.AreEqual(_battleSystem.enemyGO1, null);
        //}
        //[Test]
        //public void InstantiateCharactersForBattle_Test()
        //{
        //    _battleSystem.EnemyPrefab1 = testGo;
        //    _battleSystem.InstantiateCharactersForBattle();
        //    Assert.AreEqual(_battleSystem.enemyGO1, go);
        //}
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(go);
            Object.DestroyImmediate(testGo);
        }
    }
    public class PopulateEnemyPrefabsInBattle_Method
    {
        BattleSystem _battleSystem;
        GameObject testGo;
        GameObject go;

        [SetUp]
        public void BeforeEveryTest()
        {
            _battleSystem = new GameObject().AddComponent<BattleSystem>();
            testGo = new GameObject("test");
            go = (GameObject)Object.Instantiate(testGo, Vector3.zero, Quaternion.identity);
        }
        //[Test]
        //public void First_Prefab_Fills_0_Slot()
        //{
        //    _battleSystem.EnemyPrefab1 = testGo;
        //    _battleSystem.PopulateEnemyPrefabsInBattle();
        //    Assert.AreEqual(_battleSystem.EnemyPrefabsInBattle[0], _battleSystem.EnemyPrefab1);
        //}
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(go);
            Object.DestroyImmediate(testGo);
        }
    }
    public class PopulateCharactersInBattle_Method
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
        public void enemyGO1_Is_First()
        {
            _battleSystem.PopulateCharactersInBattle();
            Assert.AreEqual(_battleSystem.charactersInBattle.First(), testGo);
        }
        [Test]
        public void enemyGO1_Is_First_When_Faster_Than_Others()
        {

            testGo2 = new GameObject("test2");
            testGo2.AddComponent<CharacterStats>();
            testGo2.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            testGo2.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 1;
            //_battleSystem.enemyGO2 = testGo2;

            _battleSystem.PopulateCharactersInBattle();
            Assert.AreEqual(_battleSystem.charactersInBattle.First(), testGo);
        }
        [Test]
        public void enemyGO2_Is_Not_First_When_Slower_Than_Others()
        {

            testGo2 = new GameObject("test2");
            testGo2.AddComponent<CharacterStats>();
            testGo2.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            testGo2.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 3;
            //_battleSystem.enemyGO2 = testGo2;

            _battleSystem.PopulateCharactersInBattle();
            Assert.AreEqual(_battleSystem.charactersInBattle.First(), testGo2);
        }
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(testGo);
        }
    }
    public class DidEveryoneTakeATurn_Method
    {
        BattleSystem _battleSystem;
        GameObject testGo;

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
        public void An_Empty_List_Repopulates()
        {
            _battleSystem.DidEveryoneTakeATurn();
            Assert.AreEqual(_battleSystem.charactersInBattle.First(), testGo);
        }
        [Test]
        public void A_List_With_Characters_DoesNot_Repopulate()
        {
            //_battleSystem.charactersInBattle.Add(_battleSystem.enemyGO1);
            _battleSystem.DidEveryoneTakeATurn();
            Assert.AreEqual(_battleSystem.charactersInBattle.First(), testGo);
        }
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(testGo);
        }
    }
}
