#include "../include/Corn.h"

Corn::Corn(Bread *bread)
{
    this->bread = bread;
}

int Corn::cost()
{
    return this->bread->cost() + 30;
}