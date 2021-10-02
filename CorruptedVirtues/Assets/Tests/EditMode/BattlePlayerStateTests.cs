using NUnit.Framework;
using UnityEngine;

public class BattlePlayerStateTests
{
    public class AttackEnemy_Method
    {
        BattlePlayerState _battlePlayerState;
        BattleSystem _battleSystem;
        GameObject testPlayerGo;
        GameObject testEnemyGo;

        [SetUp]
        public void BeforeEveryTest()
        {
            _battlePlayerState = new BattlePlayerState();
            _battleSystem = new GameObject().AddComponent<BattleSystem>();

            testPlayerGo = new GameObject("Player");
            testPlayerGo.AddComponent<CharacterStats>();
            testPlayerGo.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            testPlayerGo.GetComponent<CharacterStats>().characterDefinition.currentAttack = 5;
            testPlayerGo.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;
            //_battleSystem.playerGO1 = testPlayerGo;

            testEnemyGo = new GameObject("Enemy");
            testEnemyGo.AddComponent<CharacterStats>();
            testEnemyGo.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            testEnemyGo.GetComponent<CharacterStats>().characterDefinition.currentHealth = 10;
            testEnemyGo.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 1;
            //_battleSystem.enemyGO1 = testEnemyGo;

            //_battleSystem.PopulateCharactersInBattle();

            //_battleSystem.PopulatePrefabsInBattle();
        }

        [Test]
        public void Enemy_Takes_Damage()
        {
            _battlePlayerState.AttackEnemy(_battleSystem, 1);
            Assert.AreEqual(_battleSystem.EnemyPrefabsInBattle[1 - 1].GetComponent<CharacterStats>().characterDefinition.currentHealth, 5);
        }
        [TearDown]
        public void AfterEveryTest()
        {
            Object.DestroyImmediate(testPlayerGo);
            Object.DestroyImmediate(testPlayerGo);
        }
    }
}
