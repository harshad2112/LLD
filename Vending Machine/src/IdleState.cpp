#include "../include/SelectProductState.h"
#include "../include/IdleState.h"

void IdleState::selectProduct(VendingMachine *vendingMachine, Item *item)
{
    throw("Click on Select Product button first");
}

vector<Note *> IdleState::cancelPurchase(VendingMachine *vendingMachine)
{
    throw("No product selected");
}

void IdleState::selectProductButton(VendingMachine *vendingMachine)
{
    State *selectProductState = new SelectProductState();
    vendingMachine->setVendingMachineState(selectProductState);
}

Item *IdleState::dispenseProduct(VendingMachine *vendingMachine)
{
    throw("You have to select the product first");
}

void IdleState::updateInventory(VendingMachine *vendingMachine, Inventory *inventory)
{
    vendingMachine->setInventory(inventory);
}

void IdleState::InsertMoney(VendingMachine *vendingMachine, vector<Note *> money)
{
    throw("No product selected");
}