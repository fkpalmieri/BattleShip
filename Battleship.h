//
//
//

#ifndef BATTLESHIP_BATTLESHIP_H
#define BATTLESHIP_BATTLESHIP_H
#include "Player.h"
#include "SetUp.h"
#include "catch.hpp"

class Battleship {
public:
    Battleship();

    void ChangeBoard(int);

    int GetBoard();

private:
    int _board;
    std::vector<std::string> _playerNames;
    std::string _player1name;
    std::string _player2name;
};


#endif //BATTLESHIP_BATTLESHIP_H
