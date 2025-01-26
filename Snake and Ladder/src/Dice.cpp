#include <cstdlib>
#include <ctime>

#include "../include/Dice.h"

Dice::Dice(int numberOfDice)
{
    this->numberOfDice = numberOfDice;
}

int Dice::rollDice()
{
    int value = 0;
    for (int dice = 1; dice <= numberOfDice; dice++)
    {
        value += (rand() % 6) + 1;
    }
    return value;
}
