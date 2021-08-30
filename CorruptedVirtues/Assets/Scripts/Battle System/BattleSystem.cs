using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class BattleSystem : MonoBehaviour
{
    private BattleBaseState currentState;

    public BattleBaseState CurrentState{get { return currentState; }}

    public int TotalEnemyXP;

    public GameObject EnemySlotContainer;
    public GameObject PlayerSlotContainer;

    public readonly BattleStartState startState = new BattleStartState();
    public readonly BattlePlayerState playerState = new BattlePlayerState();
    public readonly BattleEnemyState enemyState = new BattleEnemyState();
    public readonly BattleEndState endState = new BattleEndState();

    public List<GameObject> charactersInBattle = new List<GameObject>();
    public GameObject[] EnemyPrefabsInBattle = new GameObject[5];
    public GameObject[] EnemyCloneGameObjectsInBattle = new GameObject[5];
    public GameObject[] PlayerCloneGameObjectsInBattle = new GameObject[3];
    public GameObject[] PlayerPrefabsInBattle = new GameObject[3];

    private void Awake()
    {
        InstantiateCharactersForBattle();
    }

    public void InstantiateCharactersForBattle()
    {
        Debug.Log("Setting Up Battle");

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
                        //EnemyCloneGameObjectsInBattle[i].GetComponent<CharacterStats>().healthbar.SetHeatlh(enemy.GetComponent<CharacterStats>().characterDefinition);
                        break;
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
                //PlayerCloneGameObjectsInBattle[i].GetComponent<CharacterStats>().healthbar.SetHeatlh(GameManger.gameManger.party.PlayerParty[i].GetComponent<CharacterStats>().characterDefinition);
            }
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

    private int CoinFlip => Random.Range(0, 2);

    public void PopulateCharactersInBattle()
    {
        for (int i = 0; i < EnemyCloneGameObjectsInBattle.Length; i++)
        {
            if (EnemyCloneGameObjectsInBattle[i] != null)
            {
                charactersInBattle.Add(EnemyCloneGameObjectsInBattle[i]);
            }
        }

        for (int i = 0; i < PlayerCloneGameObjectsInBattle.Length; i++)
        {
            if (PlayerCloneGameObjectsInBattle[i] != null)
            {
                charactersInBattle.Add(PlayerCloneGameObjectsInBattle[i]);
            }
        }

        charactersInBattle = charactersInBattle.OrderByDescending(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
        Debug.Log($"{charactersInBattle.First()} is first!");
    }

    public bool DidEveryoneTakeATurn()
    {
        if (charactersInBattle.Count == 0)
        {
            PopulateCharactersInBattle();
            return true;
        }
        else
        {
            return false;
        }
    }

    public void WhosNext()
    {
        if (charactersInBattle.Count != 0)
        {
            if (charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.Enemy)
            {
                TransitionToState(enemyState);
            }
            else
            {
                TransitionToState(playerState);
            }
        }
        else
        {
            TransitionToState(endState);
        }
    }

    public void DestroyEnemy(int CharacterSlot)
    {
        Debug.Log($"Yeah! {EnemyPrefabsInBattle[CharacterSlot - 1].name} Got Got! He's dead");
        EnemyPrefabsInBattle[CharacterSlot - 1] = null;
        Destroy(EnemyCloneGameObjectsInBattle[CharacterSlot - 1]);
        charactersInBattle.Remove(EnemyCloneGameObjectsInBattle[CharacterSlot - 1]);
    }

    public void DestroyPlayer(int CharacterSlot)
    {
        Debug.Log($"Oh No! {PlayerPrefabsInBattle[CharacterSlot].name} Got Got! He's dead");
        PlayerPrefabsInBattle[CharacterSlot] = null;
        Destroy(PlayerCloneGameObjectsInBattle[CharacterSlot]);
        charactersInBattle.Remove(PlayerCloneGameObjectsInBattle[CharacterSlot]);
    }
}
