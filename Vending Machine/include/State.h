#ifndef STATE_H
#define STATE_H

#include <vector>

#include "VendingMachine.h"
#include "Item.h"
#include "Note.h"

using namespace std;

class VendingMachine;

class State
{
public:
    virtual void selectProductButton(VendingMachine *vendingMachine) = 0;
    virtual void selectProduct(VendingMachine *vendingMachine, Item *item) = 0;
    virtual Item *dispenseProduct(VendingMachine *vendingMachine) = 0;
    virtual vector<Note *> cancelPurchase(VendingMachine *vendingMachine) = 0;
    virtual void updateInventory(VendingMachine *vendingMachine, Inventory *inventory) = 0;
    virtual void InsertMoney(VendingMachine *VendingMachine, vector<Note *> money) = 0;
};

#endif