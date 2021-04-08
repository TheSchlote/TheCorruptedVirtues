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
    private GameObject enemyGO1;
    private GameObject enemyGO2;
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

    public List<GameObject> charactersInBattle;

    private void Awake()
    {
        int FrontLine = 0;
        int BackLine = 1;
        Debug.Log("Setting Up Battle");
        #region Instatiate Characters

        if(EnemyPrefab1 != null)
            enemyGO1 = Instantiate(EnemyPrefab1, EnemySlotContainer.transform.GetChild(0).transform.GetChild(FrontLine));
        if(EnemyPrefab2 != null)
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
        #endregion

        #region Order Characters By Speed Stat
        PopulateCharactersInBattle();
        #endregion
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

        charactersInBattle.OrderBy(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
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
        if(EnemyPrefab1 == null && EnemyPrefab2 == null && EnemyPrefab3 == null && EnemyPrefab4 == null && EnemyPrefab5 == null)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public void DestroyEnemy(int CharacterSlot)
    {
        switch (CharacterSlot)
        {
            case 1:
                Destroy(enemyGO1);
                charactersInBattle.Remove(enemyGO1);
                EnemyPrefab1 = null;
                break;
            case 2:
                Destroy(enemyGO2);
                charactersInBattle.Remove(enemyGO2);
                EnemyPrefab2 = null;
                break;
            case 3:
                Destroy(enemyGO3);
                charactersInBattle.Remove(enemyGO3);
                EnemyPrefab3 = null;
                break;
            case 4:
                Destroy(enemyGO4);
                charactersInBattle.Remove(enemyGO4);
                EnemyPrefab4 = null;
                break;
            case 5:
                Destroy(enemyGO5);
                charactersInBattle.Remove(enemyGO5);
                EnemyPrefab5 = null;
                break;
        }
    }
}
