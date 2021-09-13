using UnityEngine;
using UnityEngine.UI;
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
            battleSystem.statusText.text += $"\n{Enemy.name} is not paying attention!";
            battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
            return;
        }
        CharacterStats Player = battleSystem.PlayerPrefabsInBattle[PlayerSlot].GetComponent<CharacterStats>();
        CharacterStats PlayerOnScreen = battleSystem.PlayerCloneGameObjectsInBattle[PlayerSlot].GetComponent<CharacterStats>();

        battleSystem.statusText.text += $"\n{battleSystem.charactersInBattle.First().name} Attacks {Player.name}!";
        Player.TakeDamage(Enemy.characterDefinition.currentAttack);
        PlayerOnScreen.healthbar.SetHeatlh(Player.characterDefinition);
        //battleSystem.statusText.text += $"\n{Player.name} Health: {Player.characterDefinition.currentHealth}";

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
