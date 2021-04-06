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
    public GameObject enemyGO3;
    public GameObject enemyGO4;
    public GameObject enemyGO5;

    public GameObject PlayerPrefab1;
    public GameObject PlayerPrefab2;
    public GameObject PlayerPrefab3;
    public GameObject playerGO1;
    public GameObject playerGO2;
    public GameObject playerGO3;

    public readonly BattleStartState startState = new BattleStartState();
    public readonly BattlePlayerState playerState = new BattlePlayerState();
    public readonly BattleEnemyState enemyState = new BattleEnemyState();
    public readonly BattleEndState endState = new BattleEndState();

    public List<CharacterStats> charactersInBattle;

    private void Awake()
    {
        int FrontLine = 0;
        int BackLine = 1;
        Debug.Log("Setting Up Battle");
        #region Instatiate Characters
        //Eventually check for nulls
        enemyGO1 = Instantiate(EnemyPrefab1, EnemySlotContainer.transform.GetChild(0).transform.GetChild(FrontLine));
        enemyGO2 = Instantiate(EnemyPrefab2, EnemySlotContainer.transform.GetChild(1).transform.GetChild(BackLine));
        enemyGO3 = Instantiate(EnemyPrefab3, EnemySlotContainer.transform.GetChild(2).transform.GetChild(FrontLine));
        enemyGO4 = Instantiate(EnemyPrefab4, EnemySlotContainer.transform.GetChild(3).transform.GetChild(BackLine));
        enemyGO5 = Instantiate(EnemyPrefab5, EnemySlotContainer.transform.GetChild(4).transform.GetChild(FrontLine));
        
        playerGO1 = Instantiate(PlayerPrefab1, PlayerSlotContainer.transform.GetChild(2).transform.GetChild(FrontLine));
        #endregion

        #region Order Characters By Speed Stat
        charactersInBattle.Add(enemyGO1.GetComponent<CharacterStats>());
        charactersInBattle.Add(enemyGO2.GetComponent<CharacterStats>());
        charactersInBattle.Add(enemyGO3.GetComponent<CharacterStats>());
        charactersInBattle.Add(enemyGO4.GetComponent<CharacterStats>());
        charactersInBattle.Add(enemyGO5.GetComponent<CharacterStats>());
        charactersInBattle.Add(playerGO1.GetComponent<CharacterStats>());

        charactersInBattle.OrderBy(speed => speed.characterDefinition.currentSpeed).ToList();
        Debug.Log(charactersInBattle.First() + " is first!");
        #endregion
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
}
