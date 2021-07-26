using UnityEngine;

public class CharacterStats : MonoBehaviour
{
    public CharacterStats_SO characterDefinition;
    public CharacterInventory charInv;
    public GameObject characterItemSlot;
    #region Constructor
    public CharacterStats()
    {
        charInv = CharacterInventory.instance;
    }
    #endregion

    #region Initializations
    private void Start()
    {
        //keep for testing
        if (!characterDefinition.SetManualy)
        {
            if (characterDefinition.Enemy)
            {
                characterDefinition.maxHealth = 100;
                characterDefinition.currentHealth = 50;

                characterDefinition.maxMagic = 25;
                characterDefinition.currentMagic = 10;

                characterDefinition.Wealth = 500;

                characterDefinition.baseAttack = 1;
                characterDefinition.currentAttack = 1;

                characterDefinition.baseDefense = 0;
                characterDefinition.currentDefense = 0;

                characterDefinition.baseSpeed = 0;
                characterDefinition.currentSpeed = 1;

                characterDefinition.charExperience = 0;
                characterDefinition.charLevel = 1;
            }
            if (!characterDefinition.Enemy)
            {
                characterDefinition.maxHealth = 1000;
                characterDefinition.currentHealth = 999;

                characterDefinition.maxMagic = 25;
                characterDefinition.currentMagic = 10;

                characterDefinition.Wealth = 500;

                characterDefinition.baseAttack = 1;
                characterDefinition.currentAttack = 50;

                characterDefinition.baseDefense = 0;
                characterDefinition.currentDefense = 0;

                characterDefinition.baseSpeed = 10;
                characterDefinition.currentSpeed = 100;

                characterDefinition.charExperience = 0;
                characterDefinition.charLevel = 1;
            }
        }
    }
    #endregion

    #region Updates
    //private void Update()
    //{
    //    if (Input.GetMouseButtonDown(2))
    //    {
    //        characterDefinition.saveCharacterData();
    //    }
    //}
    #endregion

    #region Stat Increasers
    public void ApplyHealth(int healthAmount)
    {
        characterDefinition.ApplyHealth(healthAmount);
    }

    public void ApplyMagic(int magicAmount)
    {
        characterDefinition.ApplyMagic(magicAmount);
    }

    public void GiveWealth(int wealthAmount)
    {
        characterDefinition.GiveWeath(wealthAmount);
    }

    public void GainExperience(int amount)
    {
        characterDefinition.ApplyExperience(amount);
    }
    #endregion

    #region Stat Reducers
    public void TakeDamage(int amount)
    {
        characterDefinition.TakeDamage(amount);
    }

    public void TakeMagic(int amount)
    {
        characterDefinition.SpendMagic(amount);
    }

    #endregion

    #region Weapon and Armor Change
    public void ChangeEquipableItem(ItemPickUp itemPickup)
    {
        if(!characterDefinition.UnEquipItem(itemPickup, charInv, characterItemSlot))
        {
            characterDefinition.Equip(itemPickup, charInv, characterItemSlot);
        }
    }
    #endregion

    #region Reporters
    public int GetHealth()
    {
        return characterDefinition.currentHealth;
    }

    public ItemPickUp GetCurrentWeapon()
    {
        return characterDefinition.weapon;
    }
    #endregion
}
