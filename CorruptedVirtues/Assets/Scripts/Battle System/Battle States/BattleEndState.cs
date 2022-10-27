using UnityEngine;

public class BattleEndState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        if (battleSystem.flee)
        {
            GameManger.gameManger.OverworldEnemyFought.Clear();
            GameManger.gameManger.playerOverworldPositionOnBattle = Vector3.zero; //starting area
        }
        else
        {
            if (EveryPlayerIsDead())
            {
                //"Enemy Wins :( GAME OVER";
            }
            else
            {
                PlayerWins(battleSystem);
            }
        }
    }

    private void PlayerWins(BattleSystem battleSystem)
    {
        if (GameManger.gameManger.bossBattle)
        {
            //battleSystem.EndBattleScreen.transform.GetChild(0).GetComponent<Text>().text = "Player Wins! :o GAME COMPLETE";
        }
        else
        {
            GiveXPToAlivePlayers(battleSystem);
            //battleSystem.EndBattleScreen.transform.GetChild(0).GetComponent<Text>().text = "Player Wins! :D";
        }
    }

    public bool EveryPlayerIsDead()
    {
        foreach (GameObject Player in GameManger.gameManger.party.PlayerParty)
        {
            if(Player.GetComponent<CharacterStats>().characterDefinition.currentHealth > 0)
            {
                return false;
            }
        }
        return true;
    }

    public override void Update(BattleSystem battleSystem)
    {
        if (Input.GetKeyDown(KeyCode.Return) && !GameManger.gameManger.bossBattle)
        {
            GameManger.gameManger.battleHasStarted = false;
        }
    }

    public void GiveXPToAlivePlayers(BattleSystem battleSystem)
    {
        foreach (GameObject Player in GameManger.gameManger.party.PlayerParty)
        {
            if (Player.GetComponent<CharacterStats>().characterDefinition.currentHealth > 0)
            {
                Player.GetComponent<CharacterStats>().characterDefinition.ApplyExperience(battleSystem.TotalEnemyXP);
            }
        }
    }
}
