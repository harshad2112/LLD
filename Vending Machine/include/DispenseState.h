#ifndef DISPENSE_STATE_H
#define DISPENSE_STATE_H

#include "State.h"

class DispenseState : public State
{
public:
    DispenseState(VendingMachine *VendingMachine);
    void selectProductButton(VendingMachine *vendingMachine);
    void updateInventory(VendingMachine *vendingMachine, Inventory *inventory);
    void selectProduct(VendingMachine *vendingMachine, Item *item);
    vector<Note *> cancelPurchase(VendingMachine *VendingMachine);
    Item *dispenseProduct(VendingMachine *vendingMachine);
};

#endif