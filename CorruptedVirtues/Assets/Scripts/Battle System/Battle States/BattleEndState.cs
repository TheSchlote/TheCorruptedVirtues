using System;
using UnityEngine;
using UnityEngine.UI;

public class BattleEndState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        if (EveryPlayerIsDead())
        {
            battleSystem.statusText.text += "\nEnemy Wins :( GAME OVER";
        }
        else
        {
            PlayerWins(battleSystem);
        }
    }

    private void PlayerWins(BattleSystem battleSystem)
    {
        if (GameManger.gameManger.bossBattle)
        {
            battleSystem.statusText.text += "\nPlayer Wins! :o GAME COMPLETE";
        }
        else
        {
            GiveXPToAlivePlayers(battleSystem);
            battleSystem.statusText.text += "\nPress Enter to Return to OverWorld";
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
                int LevelBeforeXP = Player.GetComponent<CharacterStats>().characterDefinition.charLevel;
                Player.GetComponent<CharacterStats>().characterDefinition.ApplyExperience(battleSystem.TotalEnemyXP);
                int LevelAfterXp = Player.GetComponent<CharacterStats>().characterDefinition.charLevel;
                battleSystem.statusText.text += $"\n{Player.name} gained {battleSystem.TotalEnemyXP} XP!";
                if (LevelBeforeXP < LevelAfterXp)
                {
                    battleSystem.statusText.text += $"\n{Player.name} leveled up to level {LevelAfterXp + 1}!";
                }
            }
        }
    }
}
