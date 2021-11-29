using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManger : MonoBehaviour
{
    public List<Quest_SO> ActiveQuests = new List<Quest_SO>();

    public static GameManger gameManger;
    
    public PartyData party;
    [Serializable]
    public class PartyData
    {
        public int maxPartySize = 3;
        public List<GameObject> PlayerParty = new List<GameObject>();
    }

    public AreaData areaData;
    [Serializable]
    public class AreaData
    {
        public string regionName;
        public int maxAmountEnemys = 5;
        public List<GameObject> possibleEnemys = new List<GameObject>();
    }

    public GameObject OverWorldCharacter;

    public Transform nextCharacterPosition;
    public Transform lastCharacterPosition;

    public string sceneToLoad;
    public string lastScene;
    public string sceneSpawnPoint;
    public Vector3 playerOverworldPositionOnBattle;

    private GameBaseState currentState;

    public readonly GameBattleState BattleState = new GameBattleState();
    public readonly GameOverWorldState OverWorldState = new GameOverWorldState();
    public readonly GameMenuState MenuState = new GameMenuState();

    public bool battleHasStarted = false;
    public bool bossBattle = false;
    public bool inMenuScreen;
    public List<string> EncounteredEnemyNames = new List<string>();
    public List<string> OverworldEnemyFought = new List<string>();

    private void Awake()
    {
        ThereShouldOnlyBeOneGameManager();
        DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        TransistinoToState(MenuState);
    }

    private void Update()
    {
        currentState.Update(this);
    }

    public void TransistinoToState(GameBaseState state)
    {
        currentState = state;
        currentState.EnterState(this);
    }

    public void ThereShouldOnlyBeOneOverWorldCharacter()
    {
        const string overWorldCharacter = "OverWorldCharacter";
        if (GameObject.Find(overWorldCharacter))
        {
            return;
        }
        GameObject Hero;
        if (sceneSpawnPoint != "")
        {
            Hero = Instantiate(OverWorldCharacter, GameObject.Find(sceneSpawnPoint).transform.position, Quaternion.identity);
        }
        else
        {
            Hero = Instantiate(OverWorldCharacter, playerOverworldPositionOnBattle, Quaternion.identity);
        }

        Hero.name = overWorldCharacter;
    }

    public void ThereShouldOnlyBeOneGameManager()
    {
        if (gameManger == null)
        {
            gameManger = this;
        }
        else if (gameManger != this)
        {
            Destroy(gameObject);
        }
    }

    public void LoadNextScene()
    {
        SceneManager.LoadScene(sceneToLoad);
    }
}
