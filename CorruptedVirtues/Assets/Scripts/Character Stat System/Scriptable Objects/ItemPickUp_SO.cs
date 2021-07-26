using UnityEngine;

public enum ItemTypeDefinitions { HEALTH, WEALTH, MAGIC, WEAPON, SHEILD, ACCESSORY, BUFF }
//public enum ItemArmorSubType { None, Head, Chest, Hands, Legs, Boots};

[CreateAssetMenu(fileName = "New Item", menuName = "Item/NewItem")]
public class ItemPickUp_SO : ScriptableObject
{
    public ItemTypeDefinitions itemType = ItemTypeDefinitions.HEALTH;
    //public ItemArmorSubType itemArmorSubType = ItemArmorSubType.None;
    public int itemAmount = 0;
}
