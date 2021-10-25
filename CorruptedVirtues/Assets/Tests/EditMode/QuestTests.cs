using NUnit.Framework;
using UnityEngine;

public class QuestTests : MonoBehaviour
{
    public class IsQuestEnemyMethod 
    {
        GameObject questEnemy;
        Quest_SO quest = ScriptableObject.CreateInstance<Quest_SO>();
        
            
        [SetUp]
        public void BeforeEveryTest()
        {
            questEnemy = new GameObject("QuestEnemy");
            questEnemy.AddComponent<CharacterStats>();
            questEnemy.AddComponent<CharacterStats>().name = "QuestEnemy";
            questEnemy.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            questEnemy.GetComponent<CharacterStats>().characterDefinition.currentAttack = 5;
            questEnemy.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;

            quest.questCharacter = questEnemy;
            quest.goal = new Quest_SO.QuestGoal();
        }

        [Test]
        public void Quest_Can_Be_Added_To_GameManager()
        {
            GameManger.gameManger = new GameObject().AddComponent<GameManger>();
            Quest_SO quest = ScriptableObject.CreateInstance<Quest_SO>();
            GameManger.gameManger.ActiveQuests.Add(quest);
            Assert.AreEqual(GameManger.gameManger.ActiveQuests.Count, 1);
        }

        [Test]
        public void When_KilledEnemy_Is_Not_QuestEnemy_Return_False()
        {
            GameObject killedCharacter;
            killedCharacter = new GameObject("KilledEnemy");
            killedCharacter.AddComponent<CharacterStats>();
            killedCharacter.GetComponent<CharacterStats>().characterDefinition = ScriptableObject.CreateInstance<CharacterStats_SO>();
            killedCharacter.GetComponent<CharacterStats>().characterDefinition.currentAttack = 5;
            killedCharacter.GetComponent<CharacterStats>().characterDefinition.currentSpeed = 2;

            quest.questCharacter = questEnemy;
            Assert.AreEqual(quest.IsQuestEnemy(killedCharacter), false);
        }

        [Test]
        public void When_KilledEnemy_Is_QuestEnemy_Return_True()
        {
            quest.questCharacter = questEnemy;
            Assert.AreEqual(quest.IsQuestEnemy(questEnemy), true);
        }

        [Test]
        public void When_QuestEnemy_Killed_Increase_CurrentAmount()
        {
            quest.questCharacter = questEnemy;
            quest.IsQuestEnemy(questEnemy);
            Assert.AreEqual(quest.goal.currentAmount, 1);
        }

        [Test]
        public void When_CurrentAmount_Does_Not_Meet_GoalAmount_CompleteQuest_False()
        {
            quest.goal.currentAmount = 0;
            quest.goal.goalAmount = 10;
            
            quest.IsQuestEnemy(questEnemy);
            Assert.AreEqual(quest.isComplete, false);
        }

        [Test]
        public void When_CurrentAmount_Meets_GoalAmount_CompleteQuest_True()
        {
            quest.goal.currentAmount = 9;
            quest.goal.goalAmount = 10;

            quest.IsQuestEnemy(questEnemy);
            Assert.AreEqual(quest.isComplete, true);
        }
    }
}
