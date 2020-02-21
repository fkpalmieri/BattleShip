#include <iostream>
#include "Battleship.h"
#include "Player.h"
#include "Grid.h"

int main() {
    Grid g;
    Grid h(5);
    Grid j(6, 7);
    g.changeCoord(2, 3, 3);
    g.changeCoord(2, 4, 3);
    h.changeCoord(3, 4, 1);
    h.changeCoord(3, 3, 1);
    j.changeCoord(3, 4, 2);
    j.changeCoord(5, 3, 2);
    g.printBoard();
    h.printBoard();
    j.printBoard();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
