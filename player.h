#ifndef PLAYER_H
#define PLAYER_H

#include "playing_entity.h"
#include "board.h"

class Player: public PlayingEntity {

    public:
        Player(t_tile t);
        int getMove();
};

#endif