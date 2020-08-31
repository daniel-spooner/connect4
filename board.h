
#ifndef BOARD_H
#define BOARD_H

#define SIZE_X 7
#define SIZE_Y 6

typedef enum {empty, player1, player2} t_tile;

class Board {

    private:
        t_tile board[SIZE_Y][SIZE_X];

        t_tile checkVertical(int x, int y);
        t_tile checkHorizontal(int x, int y);
        t_tile checkDownDiag(int x, int y);
        t_tile checkUpDiag(int x, int y);

    public:

        Board();

        bool addMove(t_tile type, int position);
        bool checkBoardFull();
        t_tile checkFullWin();
        void displayBoard();

};

#endif