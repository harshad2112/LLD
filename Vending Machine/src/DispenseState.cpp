#include "../include/DispenseState.h"
#include "../include/IdleState.h"

DispenseState::DispenseState(VendingMachine *VendingMachine)
{
    VendingMachine->clearPurchase();
    State *idle = new IdleState();
    VendingMachine->setVendingMachineState(idle);
}

void DispenseState::selectProduct(VendingMachine *vendingMachine, Item *item)
{
    throw("Currently dispensing product");
}
vector<Note *> DispenseState::cancelPurchase(VendingMachine *VendingMachine)
{
    throw("Currently dispensing product");
}

void DispenseState::selectProductButton(VendingMachine *vendingMachine)
{
    throw("Currently dispensing product");
}

Item *DispenseState::dispenseProduct(VendingMachine *vendingMachine)
{
    throw("Currently Dispensing product");
}

void DispenseState::updateInventory(VendingMachine *vendingMachine, Inventory *inventory)
{
    throw("Cannot update inventory");
}