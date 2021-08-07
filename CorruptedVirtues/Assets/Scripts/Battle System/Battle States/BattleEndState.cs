using System;
using UnityEngine;

public class BattleEndState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EndState");

        CharacterStats Player = GameManger.gameManger.party.PlayerParty[0].GetComponent<CharacterStats>();
        //CharacterStats Enemy = battleSystem.EnemyPrefab1.GetComponent<CharacterStats>();
        if (EveryPlayerIsDead())
        {
            Debug.Log("Enemy Wins :(");
        }
        else
        {
            Debug.Log("Player Wins! :D");
            GiveXPToAlivePlayers(battleSystem);
            Debug.Log("Press Enter to Return to OverWorld");
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
        if (Input.GetKeyDown(KeyCode.Return))
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
