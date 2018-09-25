#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <stack>
#include <map>
#include "c4types.h"


class Board
{
    int colheights[7];
    std::stack<move_t> moves;

public:
    bool debug_;
    player_t player;
    Board();
    Board(
        move_t* p, 
        size_t c   );

    player_t board[7][6];

    bool push_counter(
        move_t col,
        bool switch_pl = true);
        
    void pop_counter();

    bool get_last_move(
        move_t& col, 
        move_t& row);

    size_t win_in_direction(
        player_t player, 
        size_t len,
        size_t goal, 
        move_t x, 
        height_t y, 
        size_t dx, 
        size_t dy);

    bool win_in_line(
        player_t player, 
        size_t goal, 
        move_t x, 
        height_t y, 
        size_t dx, 
        size_t dy);

    bool win(
        move_t col, 
        height_t row);

    bool win(
        move_t col, 
        height_t row,
        player_t plyr);

    bool win();
    bool win(player_t plyr);
    void switch_player();
};

std::ostream& operator << (std::ostream& ostr, const Board& b);

#endif // BOARD_H

