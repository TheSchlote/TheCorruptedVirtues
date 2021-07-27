using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BattleSystem : MonoBehaviour
{
    private BattleBaseState currentState;

    public BattleBaseState CurrentState 
    { 
        get { return currentState; }
    }

    public GameObject EnemySlotContainer;
    public GameObject PlayerSlotContainer;

    public GameObject enemyGO1;
    public GameObject enemyGO2;
    public GameObject enemyGO3;
    public GameObject enemyGO4;
    public GameObject enemyGO5;

    public GameObject playerGO1;
    public GameObject playerGO2;
    public GameObject playerGO3;

    public readonly BattleStartState startState = new BattleStartState();
    public readonly BattlePlayerState playerState = new BattlePlayerState();
    public readonly BattleEnemyState enemyState = new BattleEnemyState();
    public readonly BattleEndState endState = new BattleEndState();

    public List<GameObject> charactersInBattle = new List<GameObject>();
    public GameObject[] EnemyPrefabsInBattle = new GameObject[5];
    public GameObject[] EnemyGameObjectsInBattle = new GameObject[5];
    public GameObject[] PlayerGameObjectsInBattle = new GameObject[3];
    public GameObject[] PlayerPrefabsInBattle = new GameObject[3];

    private void Awake()
    {
        InstantiateCharactersForBattle();

        PopulateEnemyPrefabsInBattle();

        PopulateEnemyGameObjectsInBattle();

        PopulatePlayerGameObjectsInBattle();

        PopulatePlayerPrefabsInBattle();

        PopulateCharactersInBattle();
    }

    public void PopulatePlayerPrefabsInBattle()
    {
        PlayerPrefabsInBattle[0] = GameManger.gameManger.party.PlayerParty[0];
        PlayerPrefabsInBattle[1] = GameManger.gameManger.party.PlayerParty[1];
        PlayerPrefabsInBattle[2] = GameManger.gameManger.party.PlayerParty[2];
    }

    public void PopulatePlayerGameObjectsInBattle()
    {
        PlayerGameObjectsInBattle[0] = playerGO1;
        PlayerGameObjectsInBattle[1] = playerGO2;
        PlayerGameObjectsInBattle[2] = playerGO3;
    }

    public void PopulateEnemyGameObjectsInBattle()
    {
        EnemyGameObjectsInBattle[0] = enemyGO1;
        EnemyGameObjectsInBattle[1] = enemyGO2;
        EnemyGameObjectsInBattle[2] = enemyGO3;
        EnemyGameObjectsInBattle[3] = enemyGO4;
        EnemyGameObjectsInBattle[4] = enemyGO5;
    }

    public void PopulateEnemyPrefabsInBattle()
    {
        EnemyPrefabsInBattle[0] = GameManger.gameManger.areaData.possibleEnemys[0];
        EnemyPrefabsInBattle[1] = GameManger.gameManger.areaData.possibleEnemys[1];
        EnemyPrefabsInBattle[2] = GameManger.gameManger.areaData.possibleEnemys[2];
        EnemyPrefabsInBattle[3] = GameManger.gameManger.areaData.possibleEnemys[3];
        EnemyPrefabsInBattle[4] = GameManger.gameManger.areaData.possibleEnemys[4];
    }

    public void InstantiateCharactersForBattle()
    {
        int FrontLine = 0;
        int BackLine = 1;
        Debug.Log("Setting Up Battle");

        if (GameManger.gameManger.areaData.possibleEnemys[0] != null)
            enemyGO1 = Instantiate(GameManger.gameManger.areaData.possibleEnemys[0], EnemySlotContainer.transform.GetChild(0).transform.GetChild(FrontLine));
        if (GameManger.gameManger.areaData.possibleEnemys[1] != null)
            enemyGO2 = Instantiate(GameManger.gameManger.areaData.possibleEnemys[1], EnemySlotContainer.transform.GetChild(1).transform.GetChild(BackLine));

        if (GameManger.gameManger.EncounteredEnemy != null)
        {
            foreach(GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
            {
                if(GameManger.gameManger.EncounteredEnemy == enemy.name)
                {
                    enemyGO3 = Instantiate(enemy, EnemySlotContainer.transform.GetChild(2).transform.GetChild(FrontLine));
                }
            }
        }
        else if (GameManger.gameManger.areaData.possibleEnemys[2] != null)
        {
            enemyGO3 = Instantiate(GameManger.gameManger.areaData.possibleEnemys[2], EnemySlotContainer.transform.GetChild(2).transform.GetChild(FrontLine));
        }

        if (GameManger.gameManger.areaData.possibleEnemys[3] != null)
            enemyGO4 = Instantiate(GameManger.gameManger.areaData.possibleEnemys[3], EnemySlotContainer.transform.GetChild(3).transform.GetChild(BackLine));
        if (GameManger.gameManger.areaData.possibleEnemys[4] != null)
            enemyGO5 = Instantiate(GameManger.gameManger.areaData.possibleEnemys[4], EnemySlotContainer.transform.GetChild(4).transform.GetChild(FrontLine));

        if (GameManger.gameManger.party.PlayerParty[0] != null)
            playerGO1 = Instantiate(GameManger.gameManger.party.PlayerParty[0], PlayerSlotContainer.transform.GetChild(2).transform.GetChild(FrontLine));
        if (GameManger.gameManger.party.PlayerParty[1] != null)
            playerGO2 = Instantiate(GameManger.gameManger.party.PlayerParty[1], PlayerSlotContainer.transform.GetChild(1).transform.GetChild(BackLine));
        if (GameManger.gameManger.party.PlayerParty[2] != null)
            playerGO3 = Instantiate(GameManger.gameManger.party.PlayerParty[2], PlayerSlotContainer.transform.GetChild(3).transform.GetChild(BackLine));
    }

    public void PopulateCharactersInBattle()
    {
        if (enemyGO1 != null)
            charactersInBattle.Add(enemyGO1);
        if (enemyGO2 != null)
            charactersInBattle.Add(enemyGO2);
        if (enemyGO3 != null)
            charactersInBattle.Add(enemyGO3);
        if (enemyGO4 != null)
            charactersInBattle.Add(enemyGO4);
        if (enemyGO5 != null)
            charactersInBattle.Add(enemyGO5);
        if (playerGO1 != null)
            charactersInBattle.Add(playerGO1);
        if (playerGO2 != null)
            charactersInBattle.Add(playerGO2);
        if (playerGO3 != null)
            charactersInBattle.Add(playerGO3);

        charactersInBattle =  charactersInBattle.OrderByDescending(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
        Debug.Log(charactersInBattle.First() + " is first!");
    }
    //maybe make a bool?
    public void DidEveryoneTakeATurn()
    {
        if (charactersInBattle.Count == 0)
        {
            PopulateCharactersInBattle();
        }
    }

    private void Start()
    {
        TransitionToState(startState);
    }

    private void Update()
    {
        currentState.Update(this);
    }

    public void TransitionToState(BattleBaseState state)
    {
        currentState = state;
        currentState.EnterState(this);
    }

    public void WhosNext()
    {
        if (charactersInBattle.Count != 0)
        {
            if (charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.Enemy == false)
            {
                TransitionToState(playerState);
            }
            else
            {
                TransitionToState(enemyState);
            }
        }
        else
        {
            TransitionToState(endState);
        }
    }

    public bool AreAllEnemiesDead()
    {
        for (int i = 0; i < 5; i++)
        {
            if (EnemyPrefabsInBattle[i] != null)
                return false;
        }
        return true;
    }

    public void DestroyEnemy(int CharacterSlot)
    {
        Debug.Log("Yeah! " + EnemyPrefabsInBattle[CharacterSlot - 1].name + " Got Got! He's dead");
        EnemyPrefabsInBattle[CharacterSlot - 1] = null;
        Destroy(EnemyGameObjectsInBattle[CharacterSlot - 1]);
        charactersInBattle.Remove(EnemyGameObjectsInBattle[CharacterSlot - 1]);
    }
    //Combine these /\-\/
    //Actually combine them into one.. then seperate them on enemy&&state checks
    public bool AreAllPlayerDead()
    {
        for (int i = 0; i < 2; i++)
        {
            if (PlayerPrefabsInBattle[i] != null)
                return false;
        }
        return true;
    }

    public void DestroyPlayer(int CharacterSlot)
    {
        Debug.Log("Oh No! " + PlayerPrefabsInBattle[CharacterSlot].name + " Got Got! He's dead");
        PlayerPrefabsInBattle[CharacterSlot] = null;
        Destroy(PlayerGameObjectsInBattle[CharacterSlot]);
        charactersInBattle.Remove(PlayerGameObjectsInBattle[CharacterSlot]);
    }

    public void EndOfPlayersTurn()
    {
        charactersInBattle.Remove(charactersInBattle.First());
        DidEveryoneTakeATurn();

        if (AreAllEnemiesDead())
        {
            TransitionToState(endState);
        }
        else
        {
            WhosNext();
        }
    }
}
