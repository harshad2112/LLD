#include <cstdlib>
#include <ctime>

#include "../include/Player.h"
#include "../include/Ladder.h"
#include "../include/Snake.h"
#include "../include/Board.h"
#include "../include/Dice.h"

int main()
{
    std::srand(std::time(nullptr));
    Dice *dice = new Dice(1);

    Player *player1 = new Player("Shad", 1);
    Player *player2 = new Player("Vindy", 2);
    Player *player3 = new Player("Fishy", 3);
    Player *player4 = new Player("Essa", 4);

    queue<Player *> players;
    players.push(player1);
    players.push(player2);
    players.push(player3);
    players.push(player4);

    Ladder *ladder1 = new Ladder(4, 17);
    Ladder *ladder2 = new Ladder(21, 78);
    Ladder *ladder3 = new Ladder(55, 65);
    Ladder *ladder4 = new Ladder(33, 72);

    vector<Ladder *> ladders = {ladder1, ladder2, ladder3, ladder4};

    Snake *snake1 = new Snake(98, 12);
    Snake *snake2 = new Snake(62, 35);
    Snake *snake3 = new Snake(34, 5);
    Snake *snake4 = new Snake(85, 67);

    vector<Snake *> snakes = {snake1, snake2, snake3, snake4};

    Board *board = new Board(100, dice, players, ladders, snakes);
    board->startGame();
}
