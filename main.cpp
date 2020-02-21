#include <iostream>
#include "Battleship.h"
#include "Player.h"
#include "Grid.h"
#include "Ship.h"

int main() {
    Grid g;
    Ship k;
    k.placeShip(g,4);
    k.placeShip(g, 5);
    k.placeShip(g, 2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
