#include "board.h"
#include <cstring>
#include <iostream>
#include <vector>


Board::Board(move_t* p, size_t c)
    : player(1),debug_(false)
{
    memset( board ,0, 42 * sizeof(player_t));
    memset( colheights , 0 , 7 * sizeof(height_t));
    std::vector<int> moves(p,p+c);

    for (auto& i : moves) {
        push_counter(i);
    }

    std::cout << *this;
}

Board::Board()
    : player(1),debug_(false)
{
    memset( board ,0, 42 * sizeof(player_t));
    memset( colheights , 0 , 7 * sizeof(height_t));
}


bool Board::push_counter(move_t col,bool switch_pl)   {


    if (col < 0 || col > 6 || colheights[col]==6) {
        return false;
    }

    board[col][colheights[col]]=player;
    colheights[col] += 1;


    moves.push(  col );


    if (switch_pl)  {
        switch_player();
    }

    return true;
}


void Board::pop_counter()   {

    switch_player();
    move_t lastmove = moves.top();
    moves.pop();

    colheights[lastmove] -= 1;
    board[lastmove][colheights[lastmove]]=0;
}


std::ostream& operator<< (std::ostream& ostr, const Board& b)  {
    for (height_t row=0;row<6;++row)    {
        //# draw board upside down
        height_t actual_row = 5 - row;
        for (move_t col=0;col < 7;++col)   {
           int16_t bc = b.board[col][actual_row];
           ostr <<  bc << " ";
        }
        ostr << std::endl;
    }
    return ostr;
}

size_t Board::win_in_direction(
    player_t player, 
    size_t len,
    size_t goal, 
    move_t x, 
    height_t y, 
    size_t dx, 
    size_t dy
    ) 
{
    if (len == goal)   {
        return 0;
    } else if (x<0||x>6||y<0||y>5)  {
        return 0 ;
    } else if (board[x][y] == player)   {
        return 1 + win_in_direction(player,len+1,goal,x+dx,y+dy,dx,dy);
    } else {
        return 0;
    }
}


bool Board::win_in_line(
    player_t player,  
    size_t goal, 
    move_t x, 
    height_t y, 
    size_t dx, 
    size_t dy
    ) 
{
    size_t win1 = win_in_direction(player,0,goal,x,y,dx,dy);
    if (win1 == goal) {
        return true;
    }
    size_t win2 =   win_in_direction(player, 0,goal,x,y,-dx,-dy) -1;
    if ((win1 + win2) == goal) return true;
    return false;
}

bool Board::win(
    move_t col, 
    height_t row, 
    player_t plyr
    ) 
{

    if 	(   win_in_line(plyr,4,col,row,-1,1) ||
            win_in_line(plyr,4,col,row,-1,0)   ||
            win_in_line(plyr,4,col,row,-1,-1) ||
            win_in_line(plyr,4,col,row,0,-1)
         )
    {
            return true;
    }

    return false;

}

bool Board::win(move_t col, height_t row)   {
    return win(col,row,player);
}


bool Board::win() {
    return win(player);
}

bool Board::get_last_move(move_t& col, height_t& row) {

    if (moves.size() == 0)  {
        return false;
    }

    move_t lastmove = moves.top();
    col = moves.top();
    row = colheights[lastmove]-1;

    return true;
}

bool Board::win(player_t plyr)    {

    move_t col = 0;
    height_t row = 0;

    if (!get_last_move(col,row)) {
        return false;
    }

    return win(col,row,plyr);

}

void Board::switch_player() {
    player = 3 - player;
}


