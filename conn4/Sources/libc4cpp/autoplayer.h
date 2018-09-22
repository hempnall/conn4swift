#ifndef AUTOPLAYER_H
#define AUTOPLAYER_H

#include "board.h"
#include "player.h"

struct Branch {
    bool isValid_;
    Board& b_;
    Branch(Board& b, int move);
    ~Branch();
};

class AutoPlayer : public Player
{
    Board b_;
    uint8_t max_depth;


    int maximisePosition(Board& b, int depth ,int alpha , int beta);
    int minimisePosition(Board& b, int depth ,int alpha , int beta);
    int calculatePosition( player_t player, Board& b);
    const int minPlayer_;
    const int maxPlayer_;

   // move_analysis evals_[7];

public:
    AutoPlayer(player_t colour,int max_ply);
    virtual move_t getMove(Board& b);
    uint8_t ply();
    void setPly( uint8_t p );

};

#endif // AUTOPLAYER_H
