#include "../include/VendingMachine.h"
#include "../include/Inventory.h"

#include <iostream>

using namespace std;

int main()
{
    Item *Pepsi = new Item("Pepsi", 45);
    Item *lays = new Item("Lays", 20);
    Item *coke = new Item("Coke", 40);

    vector<Item *> itemList = {Pepsi, coke, lays};
    Inventory *inventory = new Inventory(itemList);
    VendingMachine *vendingMachine = new VendingMachine(inventory);

    try
    {
        vendingMachine->selectProductButton(vendingMachine);
        vendingMachine->selectProduct(vendingMachine, coke);
        Note *amount = new Note(FIFTY);
        vector<Note *> money;
        money.push_back(amount);
        vendingMachine->InsertMoney(vendingMachine, money);
        vendingMachine->dispenseProduct(vendingMachine);
    }
    catch (const std::exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }
}
