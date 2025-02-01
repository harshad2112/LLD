#include "../include/SelectProductState.h"
#include "../include/InsertMoneyState.h"
#include "../include/DispenseState.h"
#include "../include/IdleState.h"

void InsertMoneyState::selectProduct(VendingMachine *vendingMachine, Item *item)
{
    throw("Product already selected, please insert money");
}

vector<Note *> InsertMoneyState::cancelPurchase(VendingMachine *vendingMachine)
{
    vendingMachine->setCurrentSelectedItem(NULL);
    State *idleState = new IdleState();
    vendingMachine->setVendingMachineState(idleState);
    vector<Note *> refund = vendingMachine->refundAmount();
    return refund;
}

void InsertMoneyState::selectProductButton(VendingMachine *vendingMachine)
{
    throw("Product already selected");
}

Item *InsertMoneyState::dispenseProduct(VendingMachine *vendingMachine)
{
    vector<Note *> currentBal = vendingMachine->getCurrentAmount();
    int totalAmount = 0;
    Item *currentRequestedItem = vendingMachine->getCurrentItem();
    for (Note *note : currentBal)
    {
        totalAmount += *note;
    }
    if (totalAmount < currentRequestedItem->getPrice())
    {
        cancelPurchase(vendingMachine);
        throw("Insufficient amount");
    }
    else if (totalAmount > currentRequestedItem->getPrice())
    {
        // implement logic for returning extra amount
    }
    State *dispense = new DispenseState(vendingMachine);
    vendingMachine->setVendingMachineState(dispense);
}

void InsertMoneyState::updateInventory(VendingMachine *vendingMachine, Inventory *inventory)
{
    throw("Cannot update inventory");
}