using UnityEngine;
using UnityEngine.UI;

public class QuestGiver : MonoBehaviour
{
    public Quest quest;
    public GameObject questWindow;
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
    }

    private void OpenQuestWIndow()
    {
        titleText.text = quest.title;
        descriptionText.text = quest.isActive ? $"Killed {quest.goal.currentAmount} out of {quest.goal.requiredAmount}." : quest.description;
        questWindow.SetActive(true);
    }
    public void QuestAccept()
    {
        questWindow.SetActive(false);
        quest.isActive = true;
    }
    public void QuestDecline()
    {
        quest.isActive = false;
        questWindow.SetActive(false);
    }
}
