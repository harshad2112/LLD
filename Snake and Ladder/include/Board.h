#ifndef BOARD_H
#define BOARD_H

#include <queue>
#include <vector>

#include "Ladder.h"
#include "Player.h"
#include "Snake.h"
#include "Dice.h"

class Board
{
private:
    int boardSize;
    Dice *dice;
    queue<Player *> players;
    vector<Ladder *> ladders;
    vector<Snake *> snakes;
    bool isGameFinished;

public:
    Board(int boardSize, Dice *dice, queue<Player *> players, vector<Ladder *> ladders, vector<Snake *> snakes);
    void startGame();
};

#endif