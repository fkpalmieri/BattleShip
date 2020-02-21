// SetUp.hpp
// Created by Cody Abad and Keegan Palmieri
// CS 372 Software Construction

#ifndef BATTLESHIP_SETUP_H
#define BATTLESHIP_SETUP_H

#include "Battleship.h"
#include "Grid.h"
#include <iostream>
#include <vector>
#include <string>

class SetUp {
public:
    SetUp();

    void WelcomeScreen();

    void GameSettings();

    void placeShip(Grid &,int,string);

    Grid returnGrid(int);

    std::vector<std::string> GetPlayerName();

    void SetPlayerName();

private:
    int _boardSize;
    std::vector<std::string> _playerNames;
    std::vector<int> _shipSizes;
    Grid _player1;
    Grid _player2;

};


#endif //BATTLESHIP_SETUP_H
