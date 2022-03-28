using UnityEngine;
using UnityEngine.UI;

public class BattleUI : MonoBehaviour
{
    public BattleSystem battleSystem;

    public GameObject[] EnemySprites = new GameObject[5];
    public GameObject[] PlayerSprites = new GameObject[3];
    public GameObject TurnOrder, PlayerChoice, PlayerStat, PlayerCharacters, EnemyCharacters, CharacterTurn;
    bool verticalInputInUse, horizontalInputInUse = false;

    private void Awake()
    {
        InstantiateCharactersForBattle();

        for (int PartySlot = 0; PartySlot < GameManger.gameManger.party.PlayerParty.Count; PartySlot++)
        {
            SetPlayerStatPanel(PartySlot);
        }
    }
    private void Start()
    {
        //Vector2 joey = CharacterTurn.transform.position;
        //foreach (GameObject character in battleSystem.charactersInBattle)
        //{
        //    Sprite chracterImage = character.transform.GetChild(2).GetChild(1).gameObject.GetComponent<SpriteRenderer>().sprite;
        //    CharacterTurn.transform.GetChild(0).GetComponent<Image>().sprite = chracterImage;
        //    CharacterTurn.transform.GetChild(1).GetComponent<Text>().text = character.gameObject.name;
        //    joey = TurnOrder.transform.position.y + joey.y;
        //    Instantiate(CharacterTurn, joey);
        //}
    }
    private void Update()
    {
        EnemySelection();
    }

    private void EnemySelection()
    {
        float horizontalInput = Input.GetAxisRaw("Horizontal");
        float verticalInput = Input.GetAxisRaw("Vertical");
        if (verticalInput == 0)
        {
            verticalInputInUse = false;
        }
        if (horizontalInput == 0)
        {
            horizontalInputInUse = false;
        }
        if (battleSystem.attack)
        {
            if (verticalInput > 0 && !verticalInputInUse)
            {
                verticalInputInUse = true;
                if (battleSystem.attackSlot < 4)
                {
                    battleSystem.attackSlot++;
                }
                if (battleSystem.frontRow)
                {
                    EnemyCharacters.transform.GetChild(0).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                    EnemyCharacters.transform.GetChild(0).transform.GetChild(battleSystem.attackSlot - 1).transform.GetChild(0).gameObject.SetActive(false);
                }
                else
                {
                    EnemyCharacters.transform.GetChild(1).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                    EnemyCharacters.transform.GetChild(1).transform.GetChild(battleSystem.attackSlot - 1).transform.GetChild(0).gameObject.SetActive(false);
                }
            }
            if (verticalInput < 0 && !verticalInputInUse)
            {
                verticalInputInUse = true;
                if (battleSystem.attackSlot > 0)
                {
                    battleSystem.attackSlot--;
                }
                if (battleSystem.frontRow)
                {
                    EnemyCharacters.transform.GetChild(0).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                    EnemyCharacters.transform.GetChild(0).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(false);
                }
                else
                {
                    EnemyCharacters.transform.GetChild(1).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                    EnemyCharacters.transform.GetChild(1).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(false);
                }
            }
            if (horizontalInput < 0 && !horizontalInputInUse)
            {
                horizontalInputInUse = true;
                battleSystem.frontRow = true;
                EnemyCharacters.transform.GetChild(0).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(1).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(false);
            }
            if (horizontalInput > 0 && !horizontalInputInUse)
            {
                horizontalInputInUse = true;
                battleSystem.frontRow = false;
                EnemyCharacters.transform.GetChild(1).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(0).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(false);
            }
        }
    }

    //PlayerOnScreen.healthbar.SetHeatlh(Player.characterDefinition);
    //EnemyOnScreen = battleSystem.EnemyCloneGameObjectsInBattle[EnemySlot - 1].GetComponent<CharacterStats>();

    //void PlayerTurnStuff
    //{
    //    Image PlayerProfile = battleSystem.PlayerChoiceButtons.transform.GetChild(2).GetComponent<Image>();
    //    SpriteRenderer PlayersProfile = battleSystem.charactersInBattle.First().transform.GetChild(2).GetChild(1).gameObject.GetComponent<SpriteRenderer>();
    //PlayerProfile.sprite = PlayersProfile.sprite;
    //    Text PlayerName = battleSystem.PlayerChoiceButtons.transform.GetChild(2).GetChild(0).GetComponent<Text>();
    //PlayerName.text = battleSystem.charactersInBattle.First().name;
    //    battleSystem.PlayerChoiceButtons.SetActive(true);
    //    battleSystem.EnemyAttackButtons.SetActive(false);
    //}
    public void RemoveCharactersInBattleHealthbars(BattleSystem battleSystem)
    {
        //prolly switch to using characters in battle
        if (GameManger.gameManger.bossBattle)
        {
            GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
            Healthbar enemyHealthbar = EnemySprites[2].GetComponent<CharacterStats>().healthbar;
            enemyHealthbar.gameObject.SetActive(false);
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
                            Healthbar enemyHealthbar = EnemySprites[i].GetComponent<CharacterStats>().healthbar;
                            enemyHealthbar.gameObject.SetActive(false);
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
                Healthbar playerHealthbar = PlayerSprites[i].GetComponent<CharacterStats>().healthbar;
                playerHealthbar.gameObject.SetActive(false);
            }
        }
    }
    public void GiveCharactersInBattleHealthbars(BattleSystem battleSystem)
    {
        //prolly switch to using characters in battle
        if (GameManger.gameManger.bossBattle)
        {
            GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
            Healthbar enemyHealthbar = battleSystem.EnemiesInBattle[2].GetComponent<CharacterStats>().healthbar;
            CharacterStats_SO enemyCharacterDefinition = boss.GetComponent<CharacterStats>().characterDefinition;
            enemyHealthbar.SetHeatlh(enemyCharacterDefinition);
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
                            Healthbar enemyHealthbar = battleSystem.EnemiesInBattle[i].GetComponent<CharacterStats>().healthbar;
                            CharacterStats_SO enemyCharacterDefinition = enemy.GetComponent<CharacterStats>().characterDefinition;
                            enemyHealthbar.SetHeatlh(enemyCharacterDefinition);
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
                Healthbar playerHealthbar = battleSystem.PlayersInBattle[i].GetComponent<CharacterStats>().healthbar;
                CharacterStats_SO playerCharacterDefinition = GameManger.gameManger.party.PlayerParty[i].GetComponent<CharacterStats>().characterDefinition;
                playerHealthbar.SetHeatlh(playerCharacterDefinition);
            }
        }
    }

    public void InstantiateCharactersForBattle()
    {
        if (GameManger.gameManger.bossBattle)
        {
            GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
            EnemySprites[2] = Instantiate(boss, EnemyCharacters.transform.GetChild(0).transform.GetChild(2));
            EnemySprites[2].name = boss.name;
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
                            EnemySprites[i] = Instantiate(enemy,EnemyCharacters.transform.GetChild(CoinFlip).transform.GetChild(i));
                            EnemySprites[i].name = enemy.name;
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
                PlayerSprites[i] = Instantiate(GameManger.gameManger.party.PlayerParty[i],
                                                                PlayerCharacters.transform.GetChild(CoinFlip).transform.GetChild(i));
                PlayerSprites[i].name = GameManger.gameManger.party.PlayerParty[i].name;
            }
        }
    }

    public void SetPlayerStatPanel(int playernumber)
    {
        GameObject PlayerGameObject = GameManger.gameManger.party.PlayerParty[playernumber];
        SpriteRenderer PlayerPartyImage = PlayerGameObject.transform.GetChild(2).GetChild(1).gameObject.GetComponent<SpriteRenderer>();
        PlayerStat.transform.GetChild(playernumber).GetChild(4).GetComponent<SpriteRenderer>().sprite = PlayerPartyImage.sprite;
        Slider PlayerStatHealthBar = PlayerStat.transform.GetChild(playernumber).GetChild(1).GetComponent<Slider>();
        int maxHealth = GameManger.gameManger.party.PlayerParty[playernumber].transform.GetComponent<CharacterStats>().characterDefinition.maxHealth;
        PlayerStatHealthBar.maxValue = maxHealth;
        int currentHealth = GameManger.gameManger.party.PlayerParty[playernumber].transform.GetComponent<CharacterStats>().characterDefinition.currentHealth;
        PlayerStatHealthBar.value = currentHealth;
        PlayerStatHealthBar.fillRect.GetComponentInChildren<Image>().color = Color.Lerp(Color.red, Color.green, PlayerStatHealthBar.normalizedValue);
        Slider PlayerStatMagicBar = PlayerStat.transform.GetChild(playernumber).GetChild(2).GetComponent<Slider>();
        int maxMagic = GameManger.gameManger.party.PlayerParty[playernumber].transform.GetComponent<CharacterStats>().characterDefinition.maxMagic;
        PlayerStatMagicBar.maxValue = maxMagic;
        int currentMagic = GameManger.gameManger.party.PlayerParty[playernumber].transform.GetComponent<CharacterStats>().characterDefinition.currentMagic;
        PlayerStatMagicBar.value = currentMagic;
        PlayerStatMagicBar.fillRect.GetComponentInChildren<Image>().color = Color.Lerp(Color.red, Color.green, PlayerStatMagicBar.normalizedValue);
    }

    public void AttackButton()
    {
        battleSystem.attack = true;
        battleSystem.frontRow = true;
        battleSystem.attackSlot = 2;
        EnemyCharacters.transform.GetChild(0).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
    } 
    public void SkillsButton()
    {

    }
    public void FleeButton() => battleSystem.flee = true;

    public void ReturnButton()
    {
        if (!GameManger.gameManger.bossBattle)
        {
            GameManger.gameManger.battleHasStarted = false;
        }
        battleSystem.returnToOverWorld = true;
    }

    private int CoinFlip => Random.Range(0, 2);

    public void DestroyEnemy(int CharacterSlot)
    {
        //EnemyPrefabsInBattle[CharacterSlot - 1] = null;
        Destroy(EnemySprites[CharacterSlot - 1]);
    }

    public void DestroyPlayer(int CharacterSlot)
    {
        //PlayerPrefabsInBattle[CharacterSlot] = null;
        Destroy(PlayerSprites[CharacterSlot]);
    }
}
