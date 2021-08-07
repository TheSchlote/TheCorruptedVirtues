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
