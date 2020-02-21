// Main.cpp
// Created by Cody Abad and Keegan Palmieri
// CS 372 Software Construction


#include <iostream>
#include "Battleship.h"
#include "Grid.h"

int main() {
    Battleship game;
    while (game.Done()) {
        game.Turn1();
        game.Turn2();
    }
    return 0;
}
