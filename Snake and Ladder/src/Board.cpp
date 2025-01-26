#include <iostream>

#include "../include/Board.h"

using namespace std;

Board::Board(int boardSize, Dice *dice, queue<Player *> players, vector<Ladder *> ladders, vector<Snake *> snakes)
{
    this->boardSize = boardSize;
    this->dice = dice;
    this->players = players;
    this->ladders = ladders;
    this->snakes = snakes;
    this->isGameFinished = false;
}

void Board::startGame()
{
    while (!isGameFinished)
    {
        Player *playerTurn = players.front();
        players.pop();
        string currentPlayerName = playerTurn->getPlayerName();
        int diceThrow = dice->rollDice();
        cout << "Player: " << currentPlayerName << " throws the dice and gets a: " << diceThrow << endl;
        int newPosition = playerTurn->getCurrentPosition() + diceThrow;
        for (auto ladder : ladders)
        {
            if (ladder->getStartPoint() == newPosition)
            {
                cout << "Player: " << currentPlayerName << " takes the ladder from: " << newPosition << " To: " << ladder->getEndPoint() << endl;
                newPosition = ladder->getEndPoint();
                break;
            }
        }
        for (auto snake : snakes)
        {
            if (snake->getStartPoint() == newPosition)
            {
                cout << "Player: " << currentPlayerName << " gets bitten, goes from: " << newPosition << " To: " << snake->getEndPoint() << endl;
                newPosition = snake->getEndPoint();
                break;
            }
        }
        cout << "Player: " << currentPlayerName << " reaches: " << newPosition << endl;
        if (newPosition <= boardSize)
        {
            playerTurn->setCurrentPosition(newPosition);
        }
        else
        {
            cout << "Invalid Move" << endl;
        }
        players.push(playerTurn);
        if (newPosition == boardSize)
        {
            isGameFinished = true;
            cout << "Player: " << currentPlayerName << " Won!!" << endl;
        }
	cout<<endl;
    }
}
