#ifndef GAME_H
#define GAME_H

#include "player.h"

class Game
{
    Board b;
    Player& p1_;
    Player& p2_;
    Player& getCurrentPlayer();

public:
    Game(Player& p1,Player& p2);
    Game(Board& b, Player& p1 , Player& p2);
    bool startGame();
    void showMove(int move);
};

#endif // GAME_H
