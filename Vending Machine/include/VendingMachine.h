#ifndef VENDING_MACHINE_H
#define VENDING_MACHINE_H

#include "Inventory.h"
#include "State.h"
#include "Note.h"

class State;

class VendingMachine
{
private:
    Inventory *inventory;
    State *vmState;
    vector<Note *> totalBalance;
    Item *currentSelectedItem;
    vector<Note *> currentAmount;

public:
    VendingMachine(Inventory *inventory);
    void setInventory(Inventory *inventory);
    void setVendingMachineState(State *state);
    void setCurrentSelectedItem(Item *item);
    Inventory *getInventory();
    void insertNote(Note *note);
    vector<Note *> getCurrentAmount();
    void setCurrentAmount(vector<Note *> money);
    vector<Note *> refundAmount();
    Item *getCurrentItem();
    void clearPurchase();
    void selectProductButton(VendingMachine *vendingMachine);
    void selectProduct(VendingMachine *vendingMachine, Item *item);
    Item *dispenseProduct(VendingMachine *vendingMachine);
    vector<Note *> cancelPurchase(VendingMachine *vendingMachine);
    void updateInventory(VendingMachine *vendingMachine, Inventory *inventory);
    void InsertMoney(VendingMachine *VendingMachine, vector<Note *> money);
};

#endif