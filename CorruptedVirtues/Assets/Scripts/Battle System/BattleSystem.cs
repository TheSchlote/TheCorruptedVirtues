using System.Collections;
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

    public GameObject EnemyPrefab1;
    public GameObject EnemyPrefab2;
    public GameObject EnemyPrefab3;
    public GameObject EnemyPrefab4;
    public GameObject EnemyPrefab5;
    public GameObject enemyGO1;
    public GameObject enemyGO2;
    private GameObject enemyGO3;
    private GameObject enemyGO4;
    private GameObject enemyGO5;

    public GameObject PlayerPrefab1;
    public GameObject PlayerPrefab2;
    public GameObject PlayerPrefab3;
    private GameObject playerGO1;
    private GameObject playerGO2;
    private GameObject playerGO3;

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
        PlayerPrefabsInBattle[0] = PlayerPrefab1;
        PlayerPrefabsInBattle[1] = PlayerPrefab2;
        PlayerPrefabsInBattle[2] = PlayerPrefab3;
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
        EnemyPrefabsInBattle[0] = EnemyPrefab1;
        EnemyPrefabsInBattle[1] = EnemyPrefab2;
        EnemyPrefabsInBattle[2] = EnemyPrefab3;
        EnemyPrefabsInBattle[3] = EnemyPrefab4;
        EnemyPrefabsInBattle[4] = EnemyPrefab5;
    }

    public void InstantiateCharactersForBattle()
    {
        int FrontLine = 0;
        int BackLine = 1;
        Debug.Log("Setting Up Battle");

        if (EnemyPrefab1 != null)
            enemyGO1 = Instantiate(EnemyPrefab1, EnemySlotContainer.transform.GetChild(0).transform.GetChild(FrontLine));
        if (EnemyPrefab2 != null)
            enemyGO2 = Instantiate(EnemyPrefab2, EnemySlotContainer.transform.GetChild(1).transform.GetChild(BackLine));
        if (EnemyPrefab3 != null)
            enemyGO3 = Instantiate(EnemyPrefab3, EnemySlotContainer.transform.GetChild(2).transform.GetChild(FrontLine));
        if (EnemyPrefab4 != null)
            enemyGO4 = Instantiate(EnemyPrefab4, EnemySlotContainer.transform.GetChild(3).transform.GetChild(BackLine));
        if (EnemyPrefab5 != null)
            enemyGO5 = Instantiate(EnemyPrefab5, EnemySlotContainer.transform.GetChild(4).transform.GetChild(FrontLine));

        if (PlayerPrefab1 != null)
            playerGO1 = Instantiate(PlayerPrefab1, PlayerSlotContainer.transform.GetChild(2).transform.GetChild(FrontLine));
        if (PlayerPrefab2 != null)
            playerGO2 = Instantiate(PlayerPrefab2, PlayerSlotContainer.transform.GetChild(1).transform.GetChild(BackLine));
        if (PlayerPrefab3 != null)
            playerGO3 = Instantiate(PlayerPrefab3, PlayerSlotContainer.transform.GetChild(3).transform.GetChild(BackLine));
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
        if (charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.Enemy == false)
        {
            TransitionToState(playerState);
        }
        else
        {
            TransitionToState(enemyState);
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
}
