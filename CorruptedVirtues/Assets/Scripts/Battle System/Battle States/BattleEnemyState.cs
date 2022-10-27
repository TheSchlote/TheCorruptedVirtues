using UnityEngine;
using System.Linq;

public class BattleEnemyState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        EnemyTurnAction(battleSystem);
        battleSystem.TransitionToState(battleSystem.whosNextState);
    }

    public override void Update(BattleSystem battleSystem)
    {
        //not waiting for input for Enemy turn
    }

    public void EnemyTurnAction(BattleSystem battleSystem)
    {
        CharacterStats Enemy = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>();

        //Needs work
         int PlayerSlot = Random.Range(0, 3);
        if (battleSystem.PlayersInBattle[PlayerSlot] == null)
        {
            battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
            Debug.Log("Turn Skipped");
            return;
        }
        CharacterStats Player = battleSystem.PlayersInBattle[PlayerSlot].GetComponent<CharacterStats>();

        Player.TakeDamage(Enemy.characterDefinition.currentAttack);
        //Debug.Log(Player.name + " HP: " + Player.GetHealth() + "/" + Player.characterDefinition.maxHealth);
        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());

        if (Player.characterDefinition.currentHealth <= 0)
        {
            //Destroy Player on Screen
            //battleSystem.DestroyPlayer(PlayerSlot);
        }
    }
}