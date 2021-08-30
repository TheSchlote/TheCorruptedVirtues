using UnityEngine;
using System.Linq;

public class BattleEnemyState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        Debug.Log("EnemyState");
        if (battleSystem.charactersInBattle.Count == 0)
        {
            battleSystem.PopulateCharactersInBattle();
        }
        else
        {
            EnemyTurnAction(battleSystem);
            battleSystem.WhosNext();
        }
    }

    public override void Update(BattleSystem battleSystem)
    {
        //not waiting for input for Enemy turn
    }

    public void EnemyTurnAction(BattleSystem battleSystem)
    {
        CharacterStats Enemy = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>();

        int PlayerSlot = Random.Range(0, 3);
        if (battleSystem.PlayerPrefabsInBattle[PlayerSlot] == null)
        {
            Debug.Log($"The Enemy is not paying attention! Player in slot {PlayerSlot} is already dead! Turn Skipped");
            battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
            return;
        }
        CharacterStats Player = battleSystem.PlayerPrefabsInBattle[PlayerSlot].GetComponent<CharacterStats>();
        CharacterStats PlayerOnScreen = battleSystem.PlayerCloneGameObjectsInBattle[PlayerSlot].GetComponent<CharacterStats>();

        Debug.Log($"{battleSystem.charactersInBattle.First().name} Attacks!");
        Player.TakeDamage(Enemy.characterDefinition.currentAttack);
        PlayerOnScreen.healthbar.SetHeatlh(Player.characterDefinition);
        Debug.Log($"{Player.name} Health: {Player.characterDefinition.currentHealth}");

        battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
        battleSystem.DidEveryoneTakeATurn();

        if (Player.characterDefinition.currentHealth <= 0)
        {
            battleSystem.DestroyPlayer(PlayerSlot);
        }

        if (AreAllPlayerDead(battleSystem))
        {
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            return;
        }
    }
    public bool AreAllPlayerDead(BattleSystem battleSystem)
    {
        for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
        {
            if (battleSystem.PlayerPrefabsInBattle[i] != null)
            {
                return false;
            }
        }
        return true;
    }
}
