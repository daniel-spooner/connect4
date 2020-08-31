#ifndef PLAYING_ENTITY_H
#define PLAYING_ENTITY_H

#include "board.h"

class PlayingEntity {

    protected:
        t_tile type;

    public:
        void setType(t_tile t);
        t_tile getType();
        bool playMove(int move);

};

#endif