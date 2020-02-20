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
    SetUp ();

    static void WelcomeScreen ();

    void GameSettings();

    void ChangeBoardSize(int);

    int GetBoardSize();

    std::vector<std::string> GetPlayerName();

    void SetPlayerName();
private:
    int _boardSize;
    std::vector<std::string> _playerNames;
};


#endif //BATTLESHIP_SETUP_H
