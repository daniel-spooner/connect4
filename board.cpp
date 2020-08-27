
#include "board.h"
#include <iostream>

using namespace std;

Board::Board() {
    int x, y;
    for(y = 0; y < SIZE_Y; y ++) {
        for(x = 0; x < SIZE_X; x ++) {
            board[y][x] = empty;
        }
    }
}

bool Board::addMove(t_tile type, int position) {

    if(board[SIZE_Y - 1][position] != empty || position < 0 || position >= SIZE_X) {
        return false;
    }

    int y = SIZE_Y - 1;
    while(board[y][position] == empty && y >= 0) {
        y--;
    }

    y ++;
    board[y][position] = type;

    return true;
}

t_tile Board::checkVertical(int x, int y){ // '|'

    if (x < 0 || x >= SIZE_X || y < 0 || y >= SIZE_Y - 3)
        return empty;

    t_tile checkType = board[y][x];
    if(board[y+1][x] == checkType && board[y+2][x] == checkType && board[y+3][x] == checkType)
        return checkType;

    return empty;

}

t_tile Board::checkHorizontal(int x, int y){ // '-'

    if (x < 0 || x >= SIZE_X - 3 || y < 0 || y >= SIZE_Y)
        return empty;

    t_tile checkType = board[y][x];
    if(board[y][x+1] == checkType && board[y][x+2] == checkType && board[y][x+3] == checkType)
        return checkType;

    return empty;

}

t_tile Board::checkDownDiag(int x, int y){ // '\'

    if (x < 0 || x >= SIZE_X - 3 || y < 3 || y >= SIZE_Y)
        return empty;

    t_tile checkType = board[y][x];
    if(board[y-1][x+1] == checkType && board[y-2][x+2] == checkType && board[y-3][x+3] == checkType)
        return checkType;

    return empty;

}

t_tile Board::checkUpDiag(int x, int y){ // '/'

    if (x < 0 || x >= SIZE_X - 3 || y < 0 || y >= SIZE_Y - 3)
        return empty;

    t_tile checkType = board[y][x];
    if(board[y+1][x+1] == checkType && board[y+2][x+2] == checkType && board[y+3][x+3] == checkType)
        return checkType;

    return empty;

}

t_tile Board::checkFullWin() {

    int x, y;
    t_tile retType;

    for(y = 0; y < SIZE_Y; y++) {
        for(x = 0; x < SIZE_X; x++) {
            if((retType = checkVertical(x, y)) != empty) return retType;
            if((retType = checkHorizontal(x, y)) != empty) return retType;
            if((retType = checkDownDiag(x, y)) != empty) return retType;
            if((retType = checkUpDiag(x, y)) != empty) return retType;
        }
    }

    return empty;

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