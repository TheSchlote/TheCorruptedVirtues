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
        if (battleSystem.PlayerPrefabsInBattle[PlayerSlot] == null)
        {
            battleSystem.statusText.text += $"\n{Enemy.name} is not paying attention!";
            battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
            return;
        }
        CharacterStats Player = battleSystem.PlayerPrefabsInBattle[PlayerSlot].GetComponent<CharacterStats>();
        CharacterStats PlayerOnScreen = battleSystem.PlayerCloneGameObjectsInBattle[PlayerSlot].GetComponent<CharacterStats>();

        battleSystem.statusText.text += $"\n{battleSystem.charactersInBattle.First().name} Attacks {Player.name}!";
        Player.TakeDamage(Enemy.characterDefinition.currentAttack);
        PlayerOnScreen.healthbar.SetHeatlh(Player.characterDefinition);

        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());

        if (Player.characterDefinition.currentHealth <= 0)
        {
            battleSystem.DestroyPlayer(PlayerSlot);
        }
    }
}
