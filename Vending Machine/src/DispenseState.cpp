#include <iostream>

#include "../include/DispenseState.h"
#include "../include/IdleState.h"

using namespace std;

DispenseState::DispenseState(VendingMachine *VendingMachine)
{
    cout<<"Fetching item to dispense"<<endl;
    Item *dispenseItem = VendingMachine->getCurrentItem();
    cout<<"Item dispensed"<<endl;
    cout << "Item: " << dispenseItem->getName() << " has been dispanced" << endl;
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

void DispenseState::InsertMoney(VendingMachine *vendingMachine, vector<Note *> money)
{
    throw("Currently Dispensing product");
}
