#ifndef AUTOPLAYER_H
#define AUTOPLAYER_H

#include "Board.h"
#include "Player.h"

struct move_analysis
{



    move_analysis()
        : pos_eval(0)
    {

    }

    int pos_eval;

};



struct Branch {
    bool isValid_;
    Board& b_;
    Branch(Board& b, int move);
    ~Branch();
};

class AutoPlayer : public Player
{
    Board b_;
    int max_depth;


    int maximisePosition(Board& b, int depth ,int alpha , int beta);
    int minimisePosition(Board& b, int depth ,int alpha , int beta);
    int calculatePosition( int player, Board& b);
    const int minPlayer_;
    const int maxPlayer_;

    move_analysis evals_[7];

public:
    AutoPlayer(int colour,int max_ply);
    virtual int getMove(Board& b);


};

#endif // AUTOPLAYER_H
