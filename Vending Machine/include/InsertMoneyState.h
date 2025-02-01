#ifndef INSERT_MONEY_STATE_H
#define INSERT_MONEY_STATE_H

#include "State.h"

class InsertMoneyState : public State
{
public:
    void selectProduct(VendingMachine *vendingMachine, Item *item);
    vector<Note *> cancelPurchase(VendingMachine *VendingMachine);
    void selectProductButton(VendingMachine *vendingMachine);
    Item *dispenseProduct(VendingMachine *vendingMachine);
    void updateInventory(VendingMachine *vendingMachine, Inventory *inventory);
};

#endif