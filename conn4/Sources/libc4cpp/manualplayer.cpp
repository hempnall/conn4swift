#include "manualplayer.h"
#include <iostream>

ManualPlayer::ManualPlayer(player_t colour)
    : Player(colour)
{
}

move_t ManualPlayer::getMove(Board& b)  {

    int move;
    bool validMove = false;

    while (!validMove)  {
        std::cout << "Player " << colour_ << ": please enter your move (0-6)";
        std::cin >> move;
        if (move >= 0 || move <= 6) {
            validMove = true;
        }
    }

    return move;

}
