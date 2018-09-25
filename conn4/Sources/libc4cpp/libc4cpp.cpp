#include "include/libc4cpp.h"
#include "manualplayer.h"
#include "autoplayer.h"
#include "game.h"
#include <iostream>

void* new_board()
{
    Board* b = new Board( );
    return b;
}

void board_show( void * board )
{
     if ( board != NULLPTR ) {
        Board* bd = static_cast<Board*>(board);
        std::cout << *bd;
    }   
}

int board_win( void * board )
{
     if ( board != NULLPTR ) {
        Board* bd = static_cast<Board*>(board);
        bool w =  bd->win();
        return w ? 1 : 0;
    }  
    return 0; 
}

void delete_board( void * b )
{
    if ( b != NULLPTR ) {
        Board* bd = static_cast<Board*>(b);
        delete bd;
    }
}

int board_push_counter(void* b,uint8_t mov,int switchplayer)
{
    bool ret = false;
    if ( b != NULLPTR ) {
        Board* bd = static_cast<Board*>(b);
        ret = bd->push_counter(mov,switchplayer != 0);
    }    
    return ret ? 1 : 0;
}

void board_switch_player(void* b)
{

    if ( b != NULLPTR ) {
        Board* bd = static_cast<Board*>(b);
        bd->switch_player();
    }    

}

uint8_t board_get_player( void*  b )
{
    if ( b != NULLPTR ) {
        Board* bd = static_cast<Board*>(b);
        return bd->player;
    }       
    return 0;
}

void start_game( void* g )
{
    if (g != NULLPTR) {
        Game *game = static_cast<Game*>(g);
        game->startGame();
    }
}

void delete_game( void* g )
{
    if (g != NULLPTR) {
        Game *game = static_cast<Game*>(g);
        delete game;
    }
}


void* new_game( void* player1 , void* player2 )
{
    Player *p1 = static_cast<Player*>(player1);
    Player *p2 = static_cast<Player*>(player2);
    Game* g = new Game(*p1,*p2);
    return g;
}



void delete_player( void* p )
{
    if (p != NULLPTR) {
        Player *player = static_cast<Player*>(p);
        delete player;
    }
}

void auto_player_set_ply( void* p , uint8_t maxply )
{
    AutoPlayer* ap = static_cast<AutoPlayer*>(p);
    ap->setPly( maxply );
}

uint8_t auto_player_get_ply(void* p )
{
    AutoPlayer* ap = static_cast<AutoPlayer*>(p);
    return ap->ply(  );
}

void* new_auto_player( uint8_t colour, uint8_t maxply)
{
    AutoPlayer *p = new AutoPlayer(colour,maxply);
    return (void*) p;
}

void* new_manual_player( uint8_t colour)
{
    ManualPlayer *p = new ManualPlayer(colour);
    return (void*) p;
}

void game_show_move( void* g, uint8_t m)
{
     if (g != NULLPTR) {
        Game *game = static_cast<Game*>(g);
        game->showMove(m);
    }   
}







