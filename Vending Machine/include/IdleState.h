#ifndef IDLE_STATE_H
#define IDLE_STATE_H

#include "State.h"

class IdleState : public State
{
public:
    void selectProductButton(VendingMachine *vendingMachine);
    void updateInventory(VendingMachine *vendingMachine, Inventory *inventory);
    void selectProduct(VendingMachine *vendingMachine, Item *item);
    vector<Note *> cancelPurchase(VendingMachine *VendingMachine);
    Item *dispenseProduct(VendingMachine *vendingMachine);
};

#endif