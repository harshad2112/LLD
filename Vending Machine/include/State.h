#ifndef STATE_H
#define STATE_H

#include <vector>

#include "Item.h"
#include "Note.h"
#include "VendingMachine.h"

using namespace std;

class State
{
public:
    virtual void selectProductButton(VendingMachine *vendingMachine) = 0;
    virtual void selectProduct(VendingMachine *vendingMachine, Item *item) = 0;
    virtual Item *dispenseProduct(VendingMachine *vendingMachine) = 0;
    virtual vector<Note *> cancelPurchase(VendingMachine *vendingMachine) = 0;
    virtual void updateInventory(VendingMachine *vendingMachine, Inventory *inventory) = 0;
};

#endif