#ifndef DICE_H
#define DICE_H

class Dice
{
private:
    int numberOfDice;

public:
    Dice(int numberOfDice);
    int rollDice();
};

#endif