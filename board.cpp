
#include "board.h"
#include <iostream>

using namespace std;

Board::Board() {
    for(int y = 0; y < SIZE_Y; y ++) {
        for(int x = 0; x < SIZE_X; x ++) {
            board[y][x] = empty;
        }
    }
}

bool Board::addMove(t_tile type, unsigned int position) {

    

    return true;
}

bool Board::checkWin() {



}

void Board::displayBoard() {

    int x, y;

    for(x = 0; x < SIZE_X * 2 + 3; x ++) {
        cout << "-";
    }
    cout << endl;
    
    for(y = SIZE_Y - 1; y >= 0; y --) {
        cout << "| ";
        for (x = 0; x < SIZE_X; x ++) {
            switch(board[y][x]) {
                case(empty):
                    cout << "0 ";
                    break;
                case(player1):
                    cout << "1 ";
                    break;
                case(player2):
                    cout << "2 ";
                    break;
            }
        }
        cout << "|" << endl;
    }

    for(x = 0; x < SIZE_X * 2 + 3; x ++) {
        cout << "-";
    }
    cout << endl;

    return;
}