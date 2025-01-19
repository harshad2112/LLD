#pragma once

#include "Toppings.h"

class Corn : public Toppings
{
public:
    Corn() = delete;
    Corn(Bread *bread);
    int cost();

private:
    Bread *bread;
};