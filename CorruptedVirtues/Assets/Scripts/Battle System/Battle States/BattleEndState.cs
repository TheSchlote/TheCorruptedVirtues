using System;
using UnityEngine;

public class BattleEndState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EndState");

        if (EveryPlayerIsDead())
        {
            Debug.Log("Enemy Wins :( GAME OVER");
        }
        else
        {
            Debug.Log("Player Wins! :D");
            if (GameManger.gameManger.bossBattle)
            {
                Debug.Log("Player Wins! :o GAME COMPLETE");
            }
            else
            {
                GiveXPToAlivePlayers(battleSystem);
                Debug.Log("Press Enter to Return to OverWorld");
            }
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
                Debug.Log($"{Player.name} gained {battleSystem.TotalEnemyXP} XP!");
                if (LevelBeforeXP < LevelAfterXp)
                {
                    Debug.Log($"{Player.name} leveled up to level {LevelAfterXp + 1}!");
                }
            }
        }
    }
}
