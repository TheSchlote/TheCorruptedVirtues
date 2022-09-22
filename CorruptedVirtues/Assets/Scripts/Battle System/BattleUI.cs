using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class BattleUI : MonoBehaviour
{
    public BattleSystem battleSystem;

    public GameObject[] EnemySprites = new GameObject[5];
    public GameObject[] PlayerSprites = new GameObject[3];
    public GameObject TurnOrder, PlayerChoice, PlayerStat, PlayerCharacters, EnemyCharacters, CharacterTurn, SkillChoice, btnSkill;
    bool verticalInputInUse = false, horizontalInputInUse = false, updateTurnOrder;
    public Skill_SO skill;

    private void Awake()
    {
        InstantiateCharactersForBattle();
    }
    private void Start()
    {

    }

    private void UpdateTurnOrder()
    {
        if (updateTurnOrder)
        {
            foreach(Transform characterturns in TurnOrder.transform)
            {
                Destroy(characterturns.gameObject);
            }

            for (int i = 0; i < battleSystem.charactersInBattle.Count; i++)
            {
                GameObject character = battleSystem.charactersInBattle[i];
                Sprite chracterImage = character.transform.GetChild(2).GetChild(1).gameObject.GetComponent<SpriteRenderer>().sprite;
                CharacterTurn.transform.GetChild(0).GetComponent<Image>().sprite = chracterImage;
                CharacterTurn.transform.GetChild(1).GetComponent<Text>().text = character.gameObject.name;
                Instantiate(CharacterTurn, new Vector3(TurnOrder.transform.position.x, TurnOrder.transform.position.y - i + 3, TurnOrder.transform.position.z), Quaternion.identity, TurnOrder.transform);
            }
            updateTurnOrder = false;
        }
    }

    private void Update()
    {
        switch (battleSystem.currentState)
        {
            case BattleStartState battleStartState:
                updateTurnOrder = true;
                //GiveCharactersInBattleHealthbars(battleSystem);
                break;
            case BattleWhosNextState battleWhosNextState:
                RemoveDeadCharacters();
                UpdateTurnOrder();
                break;
            case BattlePlayerState battlePlayerState:
                EnemySelection();
                if(!updateTurnOrder)
                updateTurnOrder = true;
                break;
            case BattleEnemyState battleEnemyState:
                updateTurnOrder = true;
                break;
            case BattleEndState battleEndState:
                //
                break;
            default:
                Debug.Log("DEFAULT");
                break;
        }
    }

    private void RemoveDeadCharacters()
    {
        for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
        {
            if (battleSystem.EnemiesInBattle[i] != null && battleSystem.EnemiesInBattle[i].GetComponent<CharacterStats>().characterDefinition.currentHealth <= 0)
            {
                DestroyEnemy(i);
            }
        }

        for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
        {
            if (battleSystem.PlayersInBattle[i] != null && battleSystem.PlayersInBattle[i].GetComponent<CharacterStats>().characterDefinition.currentHealth <= 0)
            {
                DestroyPlayer(i);
            }
        }
    }

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

    public void AttackButton()
    {
        battleSystem.attack = true;
        battleSystem.frontRow = true;
        battleSystem.attackSlot = 2;
        EnemyCharacters.transform.GetChild(0).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
    } 
    public void SkillsButton()
    {
        switch (battleSystem.currentState)
        {
            case BattlePlayerState battlePlayerState:
                List<Skill_SO> skills = battleSystem.charactersInBattle[0].GetComponent<CharacterStats>().characterDefinition.SkillList;
                int numberOfSkills = skills.Count;
                if(numberOfSkills > 0)
                {
                    PlayerChoice.SetActive(false);
                    SkillChoice.SetActive(true);
                }
                for (int i = 0; i < numberOfSkills; i++)
                {
                    btnSkill.transform.GetChild(0).GetComponent<Text>().text = skills[i].skillName;
                    btnSkill.transform.GetChild(1).GetComponent<Text>().text = i.ToString();
                    GameObject go = Instantiate(btnSkill, new Vector3(SkillChoice.transform.position.x, SkillChoice.transform.position.y - i + 2, SkillChoice.transform.position.z), Quaternion.identity, SkillChoice.transform);
                    go.GetComponent<Button>().onClick.AddListener(() =>
                    {
                        int skillIndex = int.Parse(go.transform.GetChild(1).GetComponent<Text>().text);
                        skill = skills[skillIndex];
                        Debug.Log(skill.name);
                        battleSystem.attack = true;
                        battleSystem.attackSlot = 2;
                        SelectProperSlots();
                    });
                }
                break;
        }
    }
    public void EnemySelection()
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
            if (verticalInput != 0 && !verticalInputInUse)
            {
                verticalInputInUse = true;
                if (verticalInput > 0 && battleSystem.attackSlot < 4)
                {
                    battleSystem.attackSlot++;
                }
                if (verticalInput < 0 && battleSystem.attackSlot > 0)
                {
                    battleSystem.attackSlot--;
                }
                SelectProperSlots();
            }
            if (horizontalInput != 0 && !horizontalInputInUse)
            {
                horizontalInputInUse = true;
                battleSystem.frontRow = horizontalInput < 0;
                SelectProperSlots();
            }

            if (Input.GetButton("Submit"))
            {
                SkillPatternUtil skillPattern = new SkillPatternUtil();
                DeSelectAllSlots();
                PlayerChoice.SetActive(true);
                SkillChoice.SetActive(false);
                skillPattern.WhichSkillToUse(battleSystem, battleSystem.attackSlot, skill);
                battleSystem.attack = false;
                battleSystem.attackSlot = 0;
                battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
                battleSystem.TransitionToState(battleSystem.whosNextState);
            }
        }
    }
    private void SelectProperSlots()
    {
        int row = battleSystem.frontRow ? 0 : 1;
        DeSelectAllSlots();
        switch (skill.skillPattern)
        {
            case Skill_SO.SkillPattern.Single:
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                break;
            case Skill_SO.SkillPattern.Double:
                if(battleSystem.attackSlot > 3)
                    battleSystem.attackSlot = 3;
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
                break;
            case Skill_SO.SkillPattern.DoubleEveryOther:
                if (battleSystem.attackSlot > 2)
                    battleSystem.attackSlot = 2;
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
                break;
            case Skill_SO.SkillPattern.Triple:
                if (battleSystem.attackSlot > 2)
                    battleSystem.attackSlot = 2;
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
                break;
            case Skill_SO.SkillPattern.TripleEveryOther:
                if (battleSystem.attackSlot > 0)
                    battleSystem.attackSlot = 0;
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 4).transform.GetChild(0).gameObject.SetActive(true);
                break;
            case Skill_SO.SkillPattern.Quad:
                if (battleSystem.attackSlot > 1)
                    battleSystem.attackSlot = 1;
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 3).transform.GetChild(0).gameObject.SetActive(true);
                break;
            case Skill_SO.SkillPattern.Quad2X2Slot:
                if (battleSystem.attackSlot > 0)
                    battleSystem.attackSlot = 0;
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 3).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 4).transform.GetChild(0).gameObject.SetActive(true);
                break;
            case Skill_SO.SkillPattern.Penta:
                if (battleSystem.attackSlot > 0)
                    battleSystem.attackSlot = 0;
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 3).transform.GetChild(0).gameObject.SetActive(true);
                EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 4).transform.GetChild(0).gameObject.SetActive(true);
                break;
            default:
                break;
        }
    }
    void DeSelectAllSlots()
    {
        for (int i = 0; i < 5; i++)
        {
            EnemyCharacters.transform.GetChild(0).transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(false);
            EnemyCharacters.transform.GetChild(1).transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(false);
        }
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
        battleSystem.EnemiesInBattle[CharacterSlot] = null;
        Destroy(EnemySprites[CharacterSlot]);
        EnemySprites[CharacterSlot] = null;
    }

    public void DestroyPlayer(int CharacterSlot)
    {
        Destroy(PlayerSprites[CharacterSlot]);
        PlayerSprites[CharacterSlot] = null;
    }
}
