#include "../include/Player.h"

Player::Player(string playerName, int id)
{
    this->playerName = playerName;
    this->id = id;
}

int Player::getCurrentPosition()
{
    return currentPosition;
}

void Player::setCurrentPosition(int currentPosition)
{
    this->currentPosition = currentPosition;
}

string Player::getPlayerName()
{
    return playerName;
}