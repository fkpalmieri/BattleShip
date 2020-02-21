//
// Created by keeganpalmieri on 2/19/20.
//

#ifndef BATTLESHIP_SETUP_H
#define BATTLESHIP_SETUP_H

#include "Battleship.h"
#include "Player.h"
#include <iostream>
#include <vector>
#include <string>

class SetUp {
public:
    SetUp();

    void WelcomeScreen();

    void GameSettings();

    void ChangeBoardSize(int);

    void ShipTypes();

    int GetBoardSize();

    std::vector<std::string> GetPlayerName();

    std::vector<int> GetShipTypes();

    void SetPlayerName();
private:
    int _boardSize;
    std::vector<std::string> _playerNames;
    std::vector<int> _shipSizes;

};


#endif //BATTLESHIP_SETUP_H
