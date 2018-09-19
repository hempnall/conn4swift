#include "autoplayer.h"
#include <iostream>

Branch::Branch(Board& b, int move )
    : b_(b)
{
    isValid_ =  b.push_counter(move);
}


Branch::~Branch() {
    if (isValid_) {
        b_.pop_counter();
    }
}

AutoPlayer::AutoPlayer(player_t player,int max_ply)
    : Player(player),max_depth(max_ply),
      minPlayer_(3-player),maxPlayer_(player)
{
 //   std::cout << "minPlayer:" << minPlayer_ << " maxPlayer:" << maxPlayer_ << std::endl;
}


#define WIN_SCORE 100
#define MIN_SCORE 1000
#define DTHREE_SCORE 50
#define STHREE_SCORE 25


move_t move_order[] = { 3,4,2,5,1,6,0 };

move_t AutoPlayer::getMove(Board& b)
{

    std::cout << "getting move for " << b.player << std::endl;

    int alpha = -MIN_SCORE;
    int beta = MIN_SCORE;
    int index =  maximisePosition(b,0,alpha,beta);

    std::cout << "move chosen: " << index << std::endl;

    return index;
    int move = 0 ;

    std::cout << "Player auto: please enter your move (0-6,9)";
    std::cin >> move;

    if (move == 9) {
        return index;
    } else {
        return move;
    }
}




int AutoPlayer::calculatePosition(player_t player, Board& b) {

    int score = 0;

    move_t col=0;
    height_t row = 0;

    if (! b.get_last_move(col,row)) {
        return 0;
    }

    if (b.win_in_line(player,3,col,row,-1,1) ) {
        score += 5;
    }

    if ( b.win_in_line(player,4,col,row,-1,0) ) {
        score += 5;
    }

    if (  b.win_in_line(player,4,col,row,-1,-1) ) {
        score += 5;
    }

    if ( b.win_in_line(player,4,col,row,0,-1) ) {
        score += 5;
    }

    if (player == minPlayer_) {
        return -score;
    } else {
        return score;
    }
}


int AutoPlayer::maximisePosition(
        Board &b_,
        int depth,
        int alpha,
        int beta)
{

    int player = maxPlayer_;
    int value  = -MIN_SCORE;
    int index = -1;
    int score=0;



    for (int i=0;i<  7 ;++i)   {

        int evald_move = move_order[i];

        Branch b(b_,evald_move);

        if (b.isValid_) {

            if (b_.win(player)) {

                score =  WIN_SCORE;
            } else {
                if (depth < max_depth) {

                    score = minimisePosition(b_, depth + 1,alpha , beta);

                } else {
                    score = calculatePosition(player,b_);
                }
            }

            if (score > alpha) {
                alpha = score;
            }
            if (score > value) {
                index = evald_move;
                value = score;
            }
            if (beta < alpha) {
                break;
            }
        }
    }

    if (depth == 0) {
        return index;
    } else {
        return value;
    }
}

int AutoPlayer::minimisePosition(
        Board& b_,
        int depth  /**< the depth of this ply */,
        int alpha,
        int beta
        )
{

    int player = minPlayer_;
    int value = MIN_SCORE;
    int score=0;

    Board bb;

    for (int i =0;  i<7 ; ++i)   {

        int evald_move = move_order[i];

        Branch b(b_,evald_move);



        if (b.isValid_) {

            if (b_.win(player)) {
                score =  -WIN_SCORE;
            } else {
                if (depth < max_depth) {
                    score = maximisePosition(b_, depth + 1,alpha , beta);
                } else {
                    score = calculatePosition(player,b_);
                }
            }

            if (score < beta) {
                beta = score;
            }
            if (score < value) {
                value = score;
            }
            if (beta < alpha) {
                break;
            }
        }
    }

    // DEBUG("Value=" << value);
    return value;
}


uint8_t AutoPlayer::ply()
{
    return max_depth;
}

void AutoPlayer::setPly( uint8_t p )
{
    max_depth = p;
}
