#include "../include/Inventory.h"

Inventory::Inventory(vector<Item *> itemList)
{
    for (auto item : itemList)
    {
        this->itemList[item->getId()] = item;
    }
};

vector<Item *> Inventory::getAllItems()
{
    vector<Item *> items;
    for (auto item : itemList)
    {
        items.push_back(item.second);
    }
    return items;
}

Item *Inventory::getItem(int id)
{
    if (itemList.find(id) != itemList.end())
        return itemList[id];
    throw("No items found with this id");
}