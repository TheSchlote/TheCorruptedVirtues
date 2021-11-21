using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueManger : MonoBehaviour
{
    public GameObject DialogueBox;
    public Text nameText;
    public Text dialogueText;
    public Image picture;
    public Queue<string> sentences;
    public Animator animator;

    void Start()
    {
        sentences = new Queue<string>();
    }
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && DialogueBox.activeSelf)
        {
            DisplayNextSentence();
        }    
    }

    public void StartDialogue(Dialogue dialogue)
    {
        animator.SetBool("IsOpen", true);
        nameText.text = dialogue.name;
        picture.sprite = dialogue.charImage;
        sentences.Clear();
        foreach (string sentence in dialogue.sentences)
        {
            sentences.Enqueue(sentence);
        }

        DisplayNextSentence();
    }

    public void DisplayNextSentence()
    {
        if(sentences.Count <= 0)
        {
            EndDialogue();
            return;
        }
        string sentence = sentences.Dequeue();
        StopAllCoroutines();
        StartCoroutine(TypeSentence(sentence));
    }

    IEnumerator TypeSentence(string sentence)
    {
        dialogueText.text = "";
        foreach(char letter in sentence.ToCharArray())
        {
            dialogueText.text += letter;
            yield return null;
        }
    }

    private void EndDialogue()
    {
        animator.SetBool("IsOpen", false);
        //DialogueBox.SetActive(false);
    }
}
