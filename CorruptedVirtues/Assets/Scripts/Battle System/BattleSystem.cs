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
        currentState.Update(this);
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
