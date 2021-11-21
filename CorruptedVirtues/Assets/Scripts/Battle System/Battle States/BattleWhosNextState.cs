using System.Linq;

public class BattleWhosNextState : BattleBaseState
{
    public override void EnterState(BattleSystem battleSystem)
    {
        DidEveryoneTakeATurn(battleSystem);

        TransitionToCorrectState(battleSystem);
    }

    public void TransitionToCorrectState(BattleSystem battleSystem)
    {
        if (AreAllEnemiesDead(battleSystem) || AreAllPlayerDead(battleSystem))
        {
            battleSystem.TransitionToState(battleSystem.endState);
        }
        else
        {
            if (battleSystem.charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.Enemy)
            {
                battleSystem.TransitionToState(battleSystem.enemyState);
            }
            else
            {
                battleSystem.TransitionToState(battleSystem.playerState);
            }
        }
    }

    public override void Update(BattleSystem battleSystem)
    {
    }
    public bool DidEveryoneTakeATurn(BattleSystem battleSystem)
    {
        if (battleSystem.charactersInBattle.Count == 0)
        {
            RePopulateCharactersInBattle(battleSystem);
            return true;
        }
        else
        {
            return false;
        }
    }
    public void RePopulateCharactersInBattle(BattleSystem battleSystem)
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
    public bool AreAllEnemiesDead(BattleSystem battleSystem)
    {
        for (int i = 0; i < 5; i++)
        {
            if (battleSystem.EnemyPrefabsInBattle[i] != null)
            {
                return false;
            }
        }
        return true;
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
