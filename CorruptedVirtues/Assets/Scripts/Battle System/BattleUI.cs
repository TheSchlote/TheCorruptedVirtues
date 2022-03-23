using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BattleUI : MonoBehaviour
{
    public BattleSystem battleSystem;

    public GameObject[] EnemySprites = new GameObject[5];
    public GameObject[] PlayerSprites = new GameObject[3];
    public GameObject TurnOrder, PlayerChoice, PlayerStat, PlayerCharacters, EnemyCharacters;
    
    public bool attack, flee, returnToOverWorld;
    public int attackSlot;
    private void Awake()
    {
        InstantiateCharactersForBattle();
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
            EnemySprites[2] = Instantiate(boss, EnemyCharacters.transform.GetChild(2).transform.GetChild(0));
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
                            EnemySprites[i] = Instantiate(enemy,EnemyCharacters.transform.GetChild(i).transform.GetChild(CoinFlip));
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
                                                                PlayerCharacters.transform.GetChild(i).transform.GetChild(CoinFlip));
                PlayerSprites[i].name = GameManger.gameManger.party.PlayerParty[i].name;
            }
        }
    }
//            for (int PartySlot = 0; PartySlot<GameManger.gameManger.party.PlayerParty.Count; PartySlot++)
//        {
//            SetPlayerStatPanel(PartySlot);
//}
public void SetPlayerStatPanel(int playernumber)
    {
        Image PlayerImage = PlayerStat.transform.GetChild(playernumber).GetChild(0).GetComponent<Image>();
        GameObject PlayerGameObject = GameManger.gameManger.party.PlayerParty[playernumber];
        SpriteRenderer PlayerPartyImage = PlayerGameObject.transform.GetChild(2).GetChild(1).gameObject.GetComponent<SpriteRenderer>();
        PlayerImage.sprite = PlayerPartyImage.sprite;
        Text PlayerName = PlayerStat.transform.GetChild(playernumber).GetChild(1).GetComponent<Text>();
        PlayerName.text = GameManger.gameManger.party.PlayerParty[playernumber].name;
        Slider PlayerStatHealthBar = PlayerStat.transform.GetChild(playernumber).GetChild(2).GetComponent<Slider>();
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
