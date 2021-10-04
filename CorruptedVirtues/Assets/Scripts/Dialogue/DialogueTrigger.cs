using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueTrigger : MonoBehaviour
{
    public Dialogue dialogue;
    private bool withinTalkingRange;
    public GameObject dialogueBox;

    public void TriggerDialoge()
    {
        FindObjectOfType<DialogueManger>().StartDialogue(dialogue);
    }
    
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("QuestGiver"))
        {
            withinTalkingRange = true;
        }
    }
    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("QuestGiver"))
        {
            withinTalkingRange = false;
        }
    }
    private void Update()
    {
        if (withinTalkingRange && Input.GetKeyDown(KeyCode.Space))
        {
            TriggerDialoge();
            dialogueBox.SetActive(true);
        }
    }
}
