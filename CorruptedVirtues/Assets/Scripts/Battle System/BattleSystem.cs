using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BattleSystem : MonoBehaviour
{
    public BattleBaseState currentState;
    public BattleBaseState CurrentState { get { return currentState; } }

    public readonly BattleStartState startState = new BattleStartState();
    public readonly BattleWhosNextState whosNextState = new BattleWhosNextState();
    public readonly BattlePlayerState playerState = new BattlePlayerState();
    public readonly BattleEnemyState enemyState = new BattleEnemyState();
    public readonly BattleEndState endState = new BattleEndState();

    public List<GameObject> charactersInBattle = new List<GameObject>();
    public GameObject[] EnemiesInBattle = new GameObject[5];
    public GameObject[] PlayersInBattle = new GameObject[3];

    public bool attack, frontRow, flee, returnToOverWorld;
    public int attackSlot, TotalEnemyXP;

    private void Start()
    {

        TransitionToState(startState);
    }

    public void TransitionToState(BattleBaseState state)
    {
        currentState = state;
        Debug.Log(state);
        StartCoroutine(WaitForOneSec());
    }

    IEnumerator WaitForOneSec()
    {
        yield return new WaitForSeconds(1);
        currentState.EnterState(this);
    }
}
