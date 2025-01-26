#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
private:
    string playerName;
    int id;
    int currentPosition;

public:
    Player(string playerName, int id);
    int getCurrentPosition();
    void setCurrentPosition(int currentPosition);
    string getPlayerName();
    int getPlayerId();
};

#endif