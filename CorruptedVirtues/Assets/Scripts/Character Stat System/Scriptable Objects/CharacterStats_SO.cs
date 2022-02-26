using System;
using System.Collections.Generic;
using UnityEngine;
//using UnityEditor;

[CreateAssetMenu(fileName ="NewStats", menuName ="Character/Stats")]
public class CharacterStats_SO : ScriptableObject
{

    [System.Serializable]
    public class CharLevelUps
    {
        public int maxHealth;
        public int maxMagic;
        public int baseAttack;
        public int baseDefense;
        public int baseSpeed;
    }
    #region Fields

    public bool SetManualy = false;
    public bool saveDataOnClose = false;
    public bool Enemy = true;

    public ItemPickUp weapon { get; private set; }
    public ItemPickUp shield { get; private set; }
    public ItemPickUp accessory { get; private set; }

    public int maxHealth = 0;
    public int currentHealth = 0;

    public int maxMagic = 0;
    public int currentMagic = 0;

    public int Wealth = 0;

    public int baseAttack = 0;
    public int currentAttack = 0;

    public int baseSpecialAttack = 0;
    public int currentSpecialAttack = 0;

    public int baseDefense = 0;
    public int currentDefense = 0;

    public int baseSpecialDefense = 0;
    public int currentSpecialDefense = 0;

    public float baseSpeed = 0f;
    public float currentSpeed = 0f;

    public int charExperience = 0;
    public int charLevel = 0;

    public CharLevelUps[] charLevelUps;
    public List<Skill_SO> SkillList = new List<Skill_SO>();

    #endregion

    #region Stat Increasers
    public void ApplyHealth(int healthAmount)
    {
        if ((currentHealth + healthAmount) > maxHealth)
        {
            currentHealth = maxHealth;
        }
        else
        {
            currentHealth += healthAmount;
        }
    }

    public void ApplyMagic(int magicAmount)
    {
        if ((currentMagic + magicAmount) > maxMagic)
        {
            currentMagic = maxMagic;
        }
        else
        {
            currentMagic += magicAmount;
        }
    }

    public void GiveWeath (int wealthAmount)
    {
        Wealth += wealthAmount;
    }

    public void ApplyExperience(int xpAmount)
    {
        bool hasEnoughXptoLevelup = (charExperience + xpAmount) >= (charLevel + 1) * 10;
        if (!IsMaxLevel() && hasEnoughXptoLevelup)
        {
            LevelUp();
            charExperience = IsMaxLevel() ? 0 : charExperience + xpAmount - (charLevel * 10);
        }
        else
        {
            charExperience += xpAmount;
        }
    }

    public bool IsMaxLevel()
    {
        return charLevel + 1 >= charLevelUps.Length + 1;
    }

    //public void EquipWeapon(ItemPickUp weaponPickUp, CharacterInventory charInventory, GameObject weaponSlot)
    //{
    //    weapon = weaponPickUp;
    //    currentAttack = baseAttack + weapon.itemDefinition.itemAmount;
    //}

    public void Equip(ItemPickUp itemPickup, CharacterInventory charInventory, GameObject Slot)
    {
        switch (itemPickup.itemDefinition.itemType)
        {
            case ItemTypeDefinitions.WEAPON:
                weapon = itemPickup;
                currentAttack = baseAttack + weapon.itemDefinition.itemAmount;
                break;
            case ItemTypeDefinitions.SHEILD:
                shield = itemPickup;
                currentDefense = baseDefense + shield.itemDefinition.itemAmount;
                break;
            case ItemTypeDefinitions.ACCESSORY://probably do fancy stuff here
                accessory = itemPickup;
                currentSpeed = baseSpeed + accessory.itemDefinition.itemAmount;
                break;
            default:
                //It's not an equipable item. Do nothing.
                break;
        }
    }

    #endregion

    #region Stat Reducers
    public void TakeDamage(int amount)
    {
        currentHealth -= amount;
        if(currentHealth <= 0)
        {
            //Death();
        }
    }

    public void SpendMagic(int amount)
    {
        currentMagic -= amount;
        if(currentMagic < 0)
        {
            currentMagic = 0;
        }
    }

    public bool UnEquipItem(ItemPickUp itemPickup, CharacterInventory charInventory, GameObject Slot)
    {
        bool previousItemSame = false;
        switch (itemPickup.itemDefinition.itemType) 
        {
            case ItemTypeDefinitions.WEAPON:
                if (weapon != null)
                {
                    if (weapon == itemPickup)
                    {
                        previousItemSame = true;
                    }
                    Destroy(Slot.transform.GetChild(0).gameObject);
                    weapon = null;
                    currentAttack = baseAttack;
                }
                break;
            case ItemTypeDefinitions.SHEILD:
                if (shield != null)
                {
                    if (shield == itemPickup)
                    {
                        previousItemSame = true;
                    }
                    Destroy(Slot.transform.GetChild(0).gameObject);
                    shield = null;
                    currentDefense = baseDefense;
                }
                break;
            case ItemTypeDefinitions.ACCESSORY://probably do fancy stuff here
                if (accessory != null)
                {
                    if (accessory == itemPickup)
                    {
                        previousItemSame = true;
                    }
                    Destroy(Slot.transform.GetChild(0).gameObject);
                    accessory = null;
                    currentSpeed = baseSpeed;
                }
                break;
            default:
                //It's not an unequipable item. Do nothing.
                break;
        }
        return previousItemSame;
    }


    #endregion

    #region Character Level Up and Death
    private void Death()
    {
        Debug.Log("You're Dead");
        //Call to Game Manager for Death State
        //Display Death Animation
    }

    private void LevelUp()
    {
        charLevel++;
        //Return this as a string and display on screen
        maxHealth += charLevelUps[charLevel - 1].maxHealth;
        Debug.Log("Health increased by " + charLevelUps[charLevel - 1].maxHealth + " Max Health is now " + maxHealth);
        maxMagic += charLevelUps[charLevel - 1].maxMagic;
        baseAttack += charLevelUps[charLevel - 1].baseAttack;
        Debug.Log("Attack increased by " + charLevelUps[charLevel - 1].baseAttack + " Attack is now " + baseAttack);
        baseDefense += charLevelUps[charLevel - 1].baseDefense;
        Debug.Log("Defense increased by " + charLevelUps[charLevel - 1].baseDefense + " Defense is now " + baseDefense);
        baseSpeed += charLevelUps[charLevel - 1].baseSpeed;
        Debug.Log("Speed increased by " + charLevelUps[charLevel - 1].baseSpeed + " Speed is now " + baseSpeed);

        FullyHealCharacter();
    }

    public void FullyHealCharacter()
    {
        currentHealth = maxHealth;
        currentMagic = maxMagic;
    }
    #endregion

    #region Save Character Data
    //public void saveCharacterData()
    //{
    //    saveDataOnClose = true;
    //    EditorUtility.SetDirty(this);
    //}
    #endregion
}
