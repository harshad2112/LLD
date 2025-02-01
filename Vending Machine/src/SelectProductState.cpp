#include "../include/SelectProductState.h"
#include "../include/InsertMoneyState.h"
#include "../include/IdleState.h"

void SelectProductState::selectProduct(VendingMachine *vendingMachine, Item *item)
{
    Inventory *currentItems = vendingMachine->getInventory();
    bool isItemPresent = currentItems->getItem(item->getId());
    if (isItemPresent)
    {
        vendingMachine->setCurrentSelectedItem(item);
    }
    State *insertMoneyState = new InsertMoneyState();
    vendingMachine->setVendingMachineState(insertMoneyState);
}

vector<Note *> SelectProductState::cancelPurchase(VendingMachine *vendingMachine)
{
    vendingMachine->setCurrentSelectedItem(NULL);
    State *idleState = new IdleState();
    vendingMachine->setVendingMachineState(idleState);
    vector<Note *> refund;
    return refund;
}

void SelectProductState::selectProductButton(VendingMachine *vendingMachine)
{
    throw("You have to select the product first");
}

Item *SelectProductState::dispenseProduct(VendingMachine *vendingMachine)
{
    throw("You have to select the product first");
}

void SelectProductState::updateInventory(VendingMachine *vendingMachine, Inventory *inventory)
{
    throw("You have to select the product first");
}

void SelectProductState::InsertMoney(VendingMachine *vendingMachine, vector<Note *> money)
{
    throw("No product selected");
}