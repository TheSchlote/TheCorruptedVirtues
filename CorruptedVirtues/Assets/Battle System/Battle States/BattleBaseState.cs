using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class BattleBaseState
{
    public abstract void EnterState(BattleSystem battleSystem);

    public abstract void Update(BattleSystem battleSystem);
}
