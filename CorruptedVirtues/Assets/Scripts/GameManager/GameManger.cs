using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManger : MonoBehaviour
{
    public static GameManger gameManger;

    public GameObject OverWorldCharacter;

    public Transform nextCharacterPosition;
    public Transform lastCharacterPosition;

    public string sceneToLoad;
    public string lastScene;

    private GameBaseState currentState;

    public readonly GameBattleState BattleState = new GameBattleState();
    public readonly GameOverWorldState OverWorldState = new GameOverWorldState();
    public readonly GameMenuState MenuState = new GameMenuState();

    public bool battleHasStarted = false;
    public string EncounteredEnemy;

    private void Awake()
    {
        ThereShouldOnlyBeOneGameManager();
        DontDestroyOnLoad(gameObject);
    }

    private void Start()
    {
        TransistinoToState(OverWorldState); //eventually this should be Menu
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
        GameObject Hero = Instantiate(OverWorldCharacter, Vector3.zero, Quaternion.identity);
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
