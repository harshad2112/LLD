#include "../include/VendingMachine.h"
#include "../include/IdleState.h"

#include <iostream>

using namespace std;

VendingMachine::VendingMachine(Inventory *inventory) : inventory(inventory)
{
    vmState = new IdleState();
}
void VendingMachine::setInventory(Inventory *inventory)
{
    this->inventory = inventory;
}
void VendingMachine::setVendingMachineState(State *state)
{
    this->vmState = state;
}
void VendingMachine::setCurrentSelectedItem(Item *item)
{
    currentSelectedItem = item;
    cout << "Item: " << currentSelectedItem->getName() << " has been selected" << endl;
}
Inventory *VendingMachine::getInventory()
{
    return inventory;
}
void VendingMachine::insertNote(Note *note)
{
    currentAmount.push_back(note);
}
vector<Note *> VendingMachine::getCurrentAmount()
{
    return currentAmount;
}

void VendingMachine::setCurrentAmount(vector<Note *> money)
{
    currentAmount = money;
}

vector<Note *> VendingMachine::refundAmount()
{
    vector<Note *> refund = currentAmount;
    currentAmount.resize(0);
    return refund;
}
Item *VendingMachine::getCurrentItem()
{
    cout<<currentSelectedItem->getName()<<endl;
    return currentSelectedItem;
}
void VendingMachine::clearPurchase()
{
    currentAmount.resize(0);
    currentSelectedItem = NULL;
}

void VendingMachine::selectProductButton(VendingMachine *vendingMachine)
{
    vmState->selectProductButton(vendingMachine);
}

void VendingMachine::selectProduct(VendingMachine *vendingMachine, Item *item)
{
    vmState->selectProduct(vendingMachine, item);
}

Item *VendingMachine::dispenseProduct(VendingMachine *vendingMachine)
{
    vmState->dispenseProduct(vendingMachine);
}

vector<Note *> VendingMachine::cancelPurchase(VendingMachine *vendingMachine)
{
    vmState->cancelPurchase(vendingMachine);
}

void VendingMachine::updateInventory(VendingMachine *vendingMachine, Inventory *inventory)
{
    vmState->updateInventory(vendingMachine, inventory);
}

void VendingMachine::InsertMoney(VendingMachine *VendingMachine, vector<Note *> money)
{
    vmState->InsertMoney(VendingMachine, money);
}
