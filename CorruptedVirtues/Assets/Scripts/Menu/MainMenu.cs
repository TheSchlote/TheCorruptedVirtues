using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameManger gameManger;
    public GameObject NewGameButton, panel, KnightButton, Knight, Wizard, WizardButton, Guardian;

    void Update()
    {
        if (KnightButton.activeSelf == false && WizardButton.activeSelf == false)
        {
            gameManger.party.PlayerParty.Add(Guardian);
            gameManger.inMenuScreen = false;
            SceneManager.LoadScene(3); //Town
        }
    }

    public void NewGame()
    {
        panel.SetActive(true);
        NewGameButton.SetActive(false);
    }

    public void SelectKnight()
    {
        gameManger.party.PlayerParty.Add(Knight);
        KnightButton.SetActive(false);

    }
    public void SelectWizard()
    {
        gameManger.party.PlayerParty.Add(Wizard);
        WizardButton.SetActive(false);
    }
}
