#pragma once

#include "Toppings.h"

class Cheese : public Toppings
{
public:
    Cheese() = delete;
    Cheese(Bread *bread);
    int cost();

private:
    Bread *bread;
};