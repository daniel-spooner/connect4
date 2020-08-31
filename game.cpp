
#include <iostream>
#include <cstdlib>

#include "board.h"
#include "player.h"
#include "playing_entity.h"

using namespace std;

Board gameBoard;

PlayingEntity p1;
PlayingEntity p2;


void setup(int numarg, char** args) {



}

int main(int argc, char** argv) {

    PlayingEntity p;

    Player pop = Player(player1);
    p = pop;

    Board b = Board();

    b.displayBoard();

    return 0;
}