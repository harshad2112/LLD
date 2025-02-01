#include "../include/Item.h"

int Item::idCounter = 0;

Item::Item(string name, int price) : name(name), price(price)
{
    id = ++idCounter;
}

int Item::getId()
{
    return id;
}

string Item::getName()
{
    return name;
}

int Item::getPrice()
{
    return price;
}