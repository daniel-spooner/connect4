
#ifndef BOARD_H
#define BOARD_H

#include <iostream>

#define SIZE_X 7
#define SIZE_Y 6

typedef enum {empty, player1, player2} t_tile;

class Board {

    private:
        t_tile board[SIZE_Y][SIZE_X];

    public:

        
        Board();

        bool addMove(t_tile type, unsigned int position);
        bool checkWin();
        void displayBoard();

};

#endif