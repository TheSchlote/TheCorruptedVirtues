using System;
using System.Linq;
using UnityEngine;

public class BattleStartState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        PopulatePrefabsInBattle(battleSystem);

        PopulateCharactersInBattle(battleSystem);

        ResetCharactersHealthToFull(battleSystem);

        battleSystem.TransitionToState(battleSystem.whosNextState);
    }

    public override void Update(BattleSystem battleSystem)
    {

    }

    public void PopulatePrefabsInBattle(BattleSystem battleSystem)
    {
        if (GameManger.gameManger.bossBattle)
        {
            GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
            battleSystem.EnemiesInBattle[2] = boss;
        }
        else
        {
            for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
            {
                foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
                {
                    if (GameManger.gameManger.EncounteredEnemyNames.ToArray()[i] == enemy.name)
                    {
                        battleSystem.EnemiesInBattle[i] = enemy;
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
        {
            battleSystem.PlayersInBattle[i] = GameManger.gameManger.party.PlayerParty[i];
        }
    }
    public void PopulateCharactersInBattle(BattleSystem battleSystem)
    {
        for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
        {
            if (battleSystem.EnemiesInBattle[i] != null)
            {
                battleSystem.charactersInBattle.Add(battleSystem.EnemiesInBattle[i]);
            }
        }

        for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
        {
            if (battleSystem.PlayersInBattle[i] != null)
            {
                battleSystem.charactersInBattle.Add(battleSystem.PlayersInBattle[i]);
            }
        }

        battleSystem.charactersInBattle = battleSystem.charactersInBattle.OrderByDescending(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
    }
    public void ResetCharactersHealthToFull(BattleSystem battleSystem)
    {
        for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
        {
            if (battleSystem.EnemiesInBattle[i] != null)
            {
                battleSystem.EnemiesInBattle[i].GetComponent<CharacterStats>().characterDefinition.FullyHealCharacter();
            }
        }

        //For testing
        for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
        {
            if (battleSystem.PlayersInBattle[i] != null)
            {
                battleSystem.PlayersInBattle[i].GetComponent<CharacterStats>().characterDefinition.FullyHealCharacter();
            }
        }
    }

}
