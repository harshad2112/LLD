#ifndef INVENTORY_H
#define INVENTORY_H

#include <map>
#include <vector>

#include "Item.h"

using namespace std;

class Inventory
{
private:
    map<int, Item *> itemList;

public:
    Inventory(vector<Item *> itemList);
    vector<Item *> getAllItems();
    Item *getItem(int id);
};

#endif