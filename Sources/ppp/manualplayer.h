#ifndef MANUALPLAYER_H
#define MANUALPLAYER_H

#include "player.h"

class ManualPlayer : public Player
{
public:
    ManualPlayer(int colour);
    int getMove(Board& b);
};

#endif // MANUALPLAYER_H
