using UnityEngine;
using UnityEngine.UI;

public class QuestGiver : MonoBehaviour
{
    public Quest_SO quest;
    public GameObject questWindow, questPanel;
    public Text titleText;
    public Text descriptionText;
    private bool withinQuestRange;
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("QuestGiver"))
        {
            Debug.Log("Can be given Quest");
            withinQuestRange = true;
        }
    }
    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("QuestGiver"))
        {
            Debug.Log("Too far away to be given Quest");
            withinQuestRange = false;
        }
    }
    private void Update()
    {
        if (withinQuestRange && Input.GetKeyDown(KeyCode.Space))
        {
            OpenQuestWIndow();
        }
        if (quest.isActive)
        {
            questPanel.SetActive(true);
            questPanel.transform.GetChild(0).GetComponent<Text>().text = quest.title;
            questPanel.transform.GetChild(1).GetComponent<Text>().text = $"{quest.goal.currentAmount}/{quest.goal.goalAmount}";
            questPanel.transform.GetChild(2).GetComponent<Slider>().maxValue = quest.goal.goalAmount;
            questPanel.transform.GetChild(2).GetComponent<Slider>().value = quest.goal.currentAmount;
        }
        else
        {
            questPanel.SetActive(false);
        }
    }

    private void OpenQuestWIndow()
    {
        titleText.text = quest.title;
        descriptionText.text = quest.isActive ? $"Killed {quest.goal.currentAmount} out of {quest.goal.goalAmount}." : quest.description;
        questWindow.SetActive(true);
    }
    public void QuestAccept()
    {
        questWindow.SetActive(false);
        quest.isActive = true;
        GameManger.gameManger.ActiveQuests.Add(quest);
    }
    public void QuestDecline()
    {
        quest.isActive = false;
        questWindow.SetActive(false);
    }
}
