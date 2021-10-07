using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BattleSystem : MonoBehaviour
{
    private BattleBaseState currentState;

    public BattleBaseState CurrentState { get { return currentState; } }

    public int TotalEnemyXP;

    public GameObject EnemySlotContainer;
    public GameObject PlayerSlotContainer;

    public readonly BattleStartState startState = new BattleStartState();
    public readonly BattleWhosNextState whosNextState = new BattleWhosNextState();
    public readonly BattlePlayerState playerState = new BattlePlayerState();
    public readonly BattleEnemyState enemyState = new BattleEnemyState();
    public readonly BattleEndState endState = new BattleEndState();

    public List<GameObject> charactersInBattle = new List<GameObject>();
    public GameObject[] EnemyPrefabsInBattle = new GameObject[5];
    public GameObject[] EnemyCloneGameObjectsInBattle = new GameObject[5];
    public GameObject[] PlayerCloneGameObjectsInBattle = new GameObject[3];
    public GameObject[] PlayerPrefabsInBattle = new GameObject[3];

    public Text statusText;
    public GameObject PlayerChoiceButtons;
    public bool attack, flee, returnToOverWorld;
    public int attackSlot;
    public GameObject EnemyAttackButtons, PlayerStatPanel, EndBattleScreen;
    private void Awake()
    {
        InstantiateCharactersForBattle();
    }

    public void InstantiateCharactersForBattle()
    {
        if (GameManger.gameManger.bossBattle)
        {
            GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
            EnemyCloneGameObjectsInBattle[2] = Instantiate(boss, EnemySlotContainer.transform.GetChild(2).transform.GetChild(0));
            EnemyCloneGameObjectsInBattle[2].name = boss.name;
        }
        else
        {
            for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
            {
                if (GameManger.gameManger.EncounteredEnemyNames[i] != null)
                {
                    foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
                    {
                        if (GameManger.gameManger.EncounteredEnemyNames[i] == enemy.name)
                        {
                            EnemyCloneGameObjectsInBattle[i] = Instantiate(enemy,
                                                                           EnemySlotContainer.transform.GetChild(i).transform.GetChild(CoinFlip));
                            EnemyCloneGameObjectsInBattle[i].name = enemy.name;
                            break;
                        }
                    }
                }
            }
        }
        

        for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
        {
            if (GameManger.gameManger.party.PlayerParty[i] != null)
            {
                //dont use coinflip save this info somewhere in gamemanager
                PlayerCloneGameObjectsInBattle[i] = Instantiate(GameManger.gameManger.party.PlayerParty[i],
                                                                PlayerSlotContainer.transform.GetChild(i).transform.GetChild(CoinFlip));
                PlayerCloneGameObjectsInBattle[i].name = GameManger.gameManger.party.PlayerParty[i].name;
            }
        }
    }

    private void Start()
    {
        TransitionToState(startState);
    }

    private void Update()
    {
        for (int PartySlot = 0; PartySlot < GameManger.gameManger.party.PlayerParty.Count; PartySlot++)
        {
            SetPlayerStatPanel(PartySlot);
        }
        currentState.Update(this);
    }

    public void SetPlayerStatPanel(int playernumber)
    {
        Image PlayerImage = PlayerStatPanel.transform.GetChild(playernumber).GetChild(0).GetComponent<Image>();
        GameObject PlayerGameObject = GameManger.gameManger.party.PlayerParty[playernumber];
        SpriteRenderer PlayerPartyImage = PlayerGameObject.transform.GetChild(2).GetChild(1).gameObject.GetComponent<SpriteRenderer>();
        PlayerImage.sprite = PlayerPartyImage.sprite;
        Text PlayerName = PlayerStatPanel.transform.GetChild(playernumber).GetChild(1).GetComponent<Text>();
        PlayerName.text = GameManger.gameManger.party.PlayerParty[playernumber].name;
        Slider PlayerStatHealthBar = PlayerStatPanel.transform.GetChild(playernumber).GetChild(2).GetComponent<Slider>();
        int maxHealth = GameManger.gameManger.party.PlayerParty[playernumber].transform.GetComponent<CharacterStats>().characterDefinition.maxHealth;
        PlayerStatHealthBar.maxValue = maxHealth;
        int currentHealth = GameManger.gameManger.party.PlayerParty[playernumber].transform.GetComponent<CharacterStats>().characterDefinition.currentHealth;
        PlayerStatHealthBar.value = currentHealth;
        PlayerStatHealthBar.fillRect.GetComponentInChildren<Image>().color = Color.Lerp(Color.red, Color.green, PlayerStatHealthBar.normalizedValue);
    }

    public void AttackButton() => attack = true;
    public void FleeButton() => flee = true;
    public void AttackSlot1() => attackSlot = 1;
    public void AttackSlot2() => attackSlot = 2;
    public void AttackSlot3() => attackSlot = 3;
    public void AttackSlot4() => attackSlot = 4;
    public void AttackSlot5() => attackSlot = 5;
    public void ReturnButton()
    {
        if (!GameManger.gameManger.bossBattle)
        {
            GameManger.gameManger.battleHasStarted = false;
        }
        returnToOverWorld = true;
    }

    public void TransitionToState(BattleBaseState state)
    {
        currentState = state;
        currentState.EnterState(this);
    }

    private int CoinFlip => Random.Range(0, 2);

    public void DestroyEnemy(int CharacterSlot)
    {
        statusText.text += $"\nYeah! {EnemyPrefabsInBattle[CharacterSlot - 1].name} Got Got! He's dead";
        EnemyPrefabsInBattle[CharacterSlot - 1] = null;
        Destroy(EnemyCloneGameObjectsInBattle[CharacterSlot - 1]);
        charactersInBattle.Remove(EnemyCloneGameObjectsInBattle[CharacterSlot - 1]);
    }

    public void DestroyPlayer(int CharacterSlot)
    {
        statusText.text += $"\nOh No! {PlayerPrefabsInBattle[CharacterSlot].name} Got Got! He's dead";
        PlayerPrefabsInBattle[CharacterSlot] = null;
        Destroy(PlayerCloneGameObjectsInBattle[CharacterSlot]);
        charactersInBattle.Remove(PlayerCloneGameObjectsInBattle[CharacterSlot]);
    }
}
