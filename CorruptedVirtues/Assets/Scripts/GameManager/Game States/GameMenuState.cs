public class GameMenuState : GameBaseState
{
    public override void EnterState(GameManger gameManger)
    {
        GameManger.gameManger.inMenuScreen = true;
    }

    public override void Update(GameManger gameManger)
    {
        if (!GameManger.gameManger.inMenuScreen)
        {
            GameManger.gameManger.TransistinoToState(gameManger.OverWorldState);
        }
    }
}
