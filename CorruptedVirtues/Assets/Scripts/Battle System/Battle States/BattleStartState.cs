using UnityEngine;

public class BattleStartState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("StartState");
        PopulatePrefabsInBattle(battleSystem);

        battleSystem.PopulateCharactersInBattle();

        ResetCharactersHealthToFull(battleSystem);

        battleSystem.WhosNext();
    } 

    public override void Update(BattleSystem battleSystem)
    {

    }

    public void PopulatePrefabsInBattle(BattleSystem battleSystem)
    {
        for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
        {
            foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
            {
                if (GameManger.gameManger.EncounteredEnemyNames.Contains(enemy.name))
                {
                    battleSystem.EnemyPrefabsInBattle[i] = enemy;
                    break;
                }
            }
        }

        for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
        {
            battleSystem.PlayerPrefabsInBattle[i] = GameManger.gameManger.party.PlayerParty[i];
        }
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
