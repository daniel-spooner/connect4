#ifndef PLAYER_H
#define PLAYER_H

#include "board.h"

class Player{

    private:
        t_tile type;

    public:
        Player(t_tile t);
        int playMove();
};

#endif