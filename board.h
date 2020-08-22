
#ifndef BOARD_H
#define BOARD_H


typedef enum {empty, player1, player2} t_tile;

class Board {

    private:
        unsigned int size_x;
        unsigned int size_y;


    public:
        Board();

};

#endif