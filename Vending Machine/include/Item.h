#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item
{
private:
    static int idCounter;
    int id;
    string name;
    int price;

public:
    Item(string name, int price);
    int getId();
    string getName();
    int getPrice();
};

#endif