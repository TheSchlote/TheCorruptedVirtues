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

        GiveCharactersInBattleHealthbars(battleSystem);


        //battleSystem.WhosNext();
        battleSystem.TransitionToState(battleSystem.whosNextState);
    }

    public void GiveCharactersInBattleHealthbars(BattleSystem battleSystem)
    {
        //prolly switch to using characters in battle
        if (GameManger.gameManger.bossBattle)
        {
            GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
            Healthbar enemyHealthbar = battleSystem.EnemyCloneGameObjectsInBattle[2].GetComponent<CharacterStats>().healthbar;
            CharacterStats_SO enemyCharacterDefinition = boss.GetComponent<CharacterStats>().characterDefinition;
            enemyHealthbar.SetHeatlh(enemyCharacterDefinition);
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
                            CharacterStats_SO enemyCharacterDefinition = enemy.GetComponent<CharacterStats>().characterDefinition;
                            enemyHealthbar.SetHeatlh(enemyCharacterDefinition);
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
                CharacterStats_SO playerCharacterDefinition = GameManger.gameManger.party.PlayerParty[i].GetComponent<CharacterStats>().characterDefinition;
                playerHealthbar.SetHeatlh(playerCharacterDefinition);
            }
        }
    }

    public override void Update(BattleSystem battleSystem)
    {

    }

    public void PopulatePrefabsInBattle(BattleSystem battleSystem)
    {
        if (GameManger.gameManger.bossBattle)
        {
            GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
            battleSystem.EnemyPrefabsInBattle[2] = boss;
        }
        else
        {
            for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
            {
                foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
                {
                    if (GameManger.gameManger.EncounteredEnemyNames.ToArray()[i] == enemy.name)
                    {
                        battleSystem.EnemyPrefabsInBattle[i] = enemy;
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
        {
            battleSystem.PlayerPrefabsInBattle[i] = GameManger.gameManger.party.PlayerParty[i];
        }
    }
    public void PopulateCharactersInBattle(BattleSystem battleSystem)
    {
        for (int i = 0; i < battleSystem.EnemyCloneGameObjectsInBattle.Length; i++)
        {
            if (battleSystem.EnemyCloneGameObjectsInBattle[i] != null)
            {
                battleSystem.charactersInBattle.Add(battleSystem.EnemyCloneGameObjectsInBattle[i]);
            }
        }

        for (int i = 0; i < battleSystem.PlayerCloneGameObjectsInBattle.Length; i++)
        {
            if (battleSystem.PlayerCloneGameObjectsInBattle[i] != null)
            {
                battleSystem.charactersInBattle.Add(battleSystem.PlayerCloneGameObjectsInBattle[i]);
            }
        }

        battleSystem.charactersInBattle = battleSystem.charactersInBattle.OrderByDescending(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
        battleSystem.statusText.text += $"\n{battleSystem.charactersInBattle.First().name} is first!";
    }
    public void ResetCharactersHealthToFull(BattleSystem battleSystem)
    {
        for (int i = 0; i < battleSystem.EnemyCloneGameObjectsInBattle.Length; i++)
        {
            if (battleSystem.EnemyCloneGameObjectsInBattle[i] != null)
            {
                battleSystem.EnemyCloneGameObjectsInBattle[i].GetComponent<CharacterStats>().characterDefinition.FullyHealCharacter();
            }
        }

        //For testing
        for (int i = 0; i < battleSystem.PlayerCloneGameObjectsInBattle.Length; i++)
        {
            if (battleSystem.PlayerCloneGameObjectsInBattle[i] != null)
            {
                battleSystem.PlayerCloneGameObjectsInBattle[i].GetComponent<CharacterStats>().characterDefinition.FullyHealCharacter();
            }
        }
    }

}
