#include "../include/Cheese.h"

Cheese::Cheese(Bread *bread)
{
    this->bread = bread;
}

int Cheese::cost()
{
    return this->bread->cost() + 20;
}
