using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameManger gameManger;
    public GameObject btnNewGame, panel, character1Button, character1, character2, character2Button, guardian;

    void Start()
    {
        if (panel.activeSelf)
        {
            panel.SetActive(false);
        }
    }

    private void Update()
    {
        if (character1Button.activeSelf == false && character2Button.activeSelf == false)
        {
            gameManger.party.PlayerParty.Add(guardian);
            gameManger.inMenuScreen = false;
            SceneManager.LoadScene("Tut Forest"); //Town
        }
    }

    public void NewGame()
    {
        panel.SetActive(true);
        btnNewGame.SetActive(false);
    }

    public void SelectCharacter1()
    {
        gameManger.party.PlayerParty.Add(character1);
        character1Button.SetActive(false);

    }
    public void SelectCharacter2()
    {
        gameManger.party.PlayerParty.Add(character2);
        character2Button.SetActive(false);
    }
}
