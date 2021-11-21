using System;
using UnityEngine;
using UnityEngine.UI;

public class BattleEndState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        battleSystem.EndBattleScreen.SetActive(true);
        battleSystem.PlayerChoiceButtons.SetActive(false);
        RemoveCharactersInBattleHealthbars(battleSystem);
        if (battleSystem.flee)
        {
            battleSystem.EndBattleScreen.transform.GetChild(0).GetComponent<Text>().text = "Flee";
        }
        else
        {
            if (EveryPlayerIsDead())
            {
                battleSystem.EndBattleScreen.transform.GetChild(0).GetComponent<Text>().text = "Enemy Wins :( GAME OVER";
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
            battleSystem.EndBattleScreen.transform.GetChild(0).GetComponent<Text>().text = "Player Wins! :o GAME COMPLETE";
        }
        else
        {
            GiveXPToAlivePlayers(battleSystem);
            battleSystem.EndBattleScreen.transform.GetChild(0).GetComponent<Text>().text = "Player Wins! :D";
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
                Text EndScreenText = battleSystem.EndBattleScreen.transform.GetChild(1).GetComponent<Text>();
                EndScreenText.text += $"\n{Player.name} gained {battleSystem.TotalEnemyXP} XP!";
                int LevelAfterXp = Player.GetComponent<CharacterStats>().characterDefinition.charLevel;
                if (LevelBeforeXP < LevelAfterXp)
                {
                    EndScreenText.text += $"\n{Player.name} leveled up to level {LevelAfterXp + 1}!";
                }
            }
        }
    }
    public void RemoveCharactersInBattleHealthbars(BattleSystem battleSystem)
    {
        //prolly switch to using characters in battle
        if (GameManger.gameManger.bossBattle)
        {
            GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
            Healthbar enemyHealthbar = battleSystem.EnemyCloneGameObjectsInBattle[2].GetComponent<CharacterStats>().healthbar;
            enemyHealthbar.gameObject.SetActive(false);
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
                            Healthbar enemyHealthbar = battleSystem.EnemyCloneGameObjectsInBattle[i].GetComponent<CharacterStats>().healthbar;
                            enemyHealthbar.gameObject.SetActive(false);
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
                Healthbar playerHealthbar = battleSystem.PlayerCloneGameObjectsInBattle[i].GetComponent<CharacterStats>().healthbar;
                playerHealthbar.gameObject.SetActive(false);
            }
        }
    }
}
