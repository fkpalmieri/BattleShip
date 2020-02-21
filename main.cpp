#include <iostream>
#include "Battleship.h"
#include "Player.h"
#include "Grid.h"
#include "Ship.h"

int main() {
    Battleship game;
    while (game.Done()) {
        game.Turn1();
        game.Turn2();
    }
    return 0;
}
