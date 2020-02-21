//
// Created by keeganpalmieri on 2/19/20.
//

#ifndef BATTLESHIP_SETUP_H
#define BATTLESHIP_SETUP_H

#include "Battleship.h"
#include "Player.h"
#include "Grid.h"
#include <iostream>
#include <vector>
#include <string>

class SetUp {
public:
    SetUp();

    void WelcomeScreen();

    void GameSettings();

    void ChangeBoardSize(int);

    void placeShip(Grid &,int,string);

    void ShipTypes();

    int GetBoardSize();

    Grid returnGrid(int);

    std::vector<std::string> GetPlayerName();

    std::vector<int> GetShipTypes();

    void SetPlayerName();

private:
    int _boardSize;
    std::vector<std::string> _playerNames;
    std::vector<int> _shipSizes;
    Grid _player1;
    Grid _player2;

};


#endif //BATTLESHIP_SETUP_H
