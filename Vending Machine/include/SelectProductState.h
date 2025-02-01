#ifndef SELECT_PRODUCT_STATE_H
#define SELECT_PRODUCT_STATE_H

#include "State.h"

class SelectProductState : public State
{
public:
    void selectProduct(VendingMachine *vendingMachine, Item *item);
    virtual vector<Note *> cancelPurchase(VendingMachine *VendingMachine);
    void selectProductButton(VendingMachine *vendingMachine);
    Item *dispenseProduct(VendingMachine *vendingMachine);
    void updateInventory(VendingMachine *vendingMachine, Inventory *inventory);
};

#endif