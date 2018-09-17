#include "game.h"

#include <iostream>
#include <iomanip>

Game::Game(
        Player& p1,
        Player& p2
        )
    : p1_(p1),p2_(p2)
{
}

Game::Game(
        Board& board,
        Player& p1,
        Player& p2
        )
    : p1_(p1),p2_(p2),b(board)
{
}

Player& Game::getCurrentPlayer()    {

    if (b.player == 1)  {
        return p1_;
    } else {
        return p2_;
    }


}


void Game::showMove(int move)   {

    std::cout << std::setw(1 + move * 2) << "|" << std::endl;
    std::cout << std::setw(1 + move * 2) << "v" << std::endl;
}

bool Game::startGame()  {

    std::cout << b;

    bool bWin = b.win();
    while (!bWin)    {

        int move;

        do  {
            move = getCurrentPlayer().getMove(b);
            std::cout << "move entered = " << move <<std::endl;
            profile::print();
        } while ( !  b.push_counter(move,false) );

        showMove(move);
        bWin = b.win();

        b.switch_player();

        std::cout << b;

    }

}
