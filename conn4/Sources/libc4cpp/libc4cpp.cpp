#include "include/libc4cpp.h"
#include "manualplayer.h"
#include "autoplayer.h"
#include "game.h"
#include <iostream>

#define NULLPTR 0

void* new_game( void* player1 , void* player2 )
{
    Player *p1 = static_cast<Player*>(player1);
    Player *p2 = static_cast<Player*>(player2);
    Game* g = new Game(*p1,*p2);
    return g;
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

void delete_player( void* p )
{
    if (p != NULLPTR) {
        Player *player = static_cast<Player*>(p);
        delete player;
    }
}


// void callback( cb_t fn )
// {
//     std::cout << "1) in c++ \n";
//     uint8_t n = fn();
//     std::cout << "2) in c++ \n";
//     std::cout << "the number is " << (uint16_t) n << std::endl;
// }
