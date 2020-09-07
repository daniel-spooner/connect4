
#include <iostream>
#include <cstdlib>

#include "board.h"
#include "player.h"

using namespace std;

Board gameBoard;

void setup(int numarg, char** args) {



}

int main(int argc, char** argv) {

    Board b = Board();

    b.displayBoard();

    return 0;
}