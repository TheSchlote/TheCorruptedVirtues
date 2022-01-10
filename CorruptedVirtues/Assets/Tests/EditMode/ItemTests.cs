using NUnit.Framework;
using UnityEngine;

public class ItemTests : MonoBehaviour
{
    [SetUp]
    public void BeforeEveryTest()
    {
    }

    [Test]
    public void Add_Item_To_Inventory()
    {
        GameManger.gameManger = new GameObject().AddComponent<GameManger>();
        ItemPickUp_SO testItem_SO = ScriptableObject.CreateInstance<ItemPickUp_SO>();
        GameManger.gameManger.PlayerInventory.Add(testItem_SO);
        Assert.AreEqual(GameManger.gameManger.PlayerInventory.Count, 1);
    }

    [Test]
    public void ItemType_Can_Be_Craftable()
    {
        //GameManger.gameManger = new GameObject().AddComponent<GameManger>();
        ItemPickUp_SO testItem_SO = ScriptableObject.CreateInstance<ItemPickUp_SO>();
        testItem_SO.itemType = ItemTypeDefinitions.CRAFT;
        //GameManger.gameManger.PlayerInventory.Add(testItem_SO);
        Assert.AreEqual(testItem_SO.itemType, ItemTypeDefinitions.CRAFT);
    }

}
