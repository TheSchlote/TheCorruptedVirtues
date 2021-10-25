using System;
using UnityEngine;

[CreateAssetMenu(fileName = "NewStats", menuName = "Quest")]
public class Quest_SO : ScriptableObject
{
    public string title;
    public string description;

    public bool isActive;
    public GameObject questCharacter;
    public QuestGoal goal;
    public bool isComplete;
    [Serializable]
    public class QuestGoal 
    {
        public int currentAmount;
        public int goalAmount;
    }

    public bool IsQuestEnemy(GameObject killedCharacter)
    {
        if (questCharacter != killedCharacter)
            return false;

        goal.currentAmount++;
        isComplete = goal.currentAmount >= goal.goalAmount;
        return true;
    }
}
