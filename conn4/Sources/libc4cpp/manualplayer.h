#ifndef MANUALPLAYER_H
#define MANUALPLAYER_H

#include "player.h"

class ManualPlayer : public Player
{
public:
    ManualPlayer(player_t colour);
    ~ManualPlayer() {}
    move_t getMove(Board& b);
};

#endif // MANUALPLAYER_H
