using UnityEngine;

public class BattleEndState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EndState");
        CharacterStats Player = GameManger.gameManger.party.PlayerParty[0].GetComponent<CharacterStats>();
        //CharacterStats Enemy = battleSystem.EnemyPrefab1.GetComponent<CharacterStats>();
        if (Player.characterDefinition.currentHealth <= 0)
        {
            Debug.Log("Enemy Wins :(");
        }
        else
        {
            Debug.Log("Player Wins! :D");
            Debug.Log(Player.name + " gained 100 XP!");
            Player.GainExperience(100);
            Debug.Log( Player.name + " Leveled up! ");
            Debug.Log("Press Enter to Return to OverWorld");
        }
    }

    public override void Update(BattleSystem battleSystem)
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            GameManger.gameManger.battleHasStarted = false;
        }
    }
}
