//
// Created by keeganpalmieri on 2/19/20.
//

#ifndef BATTLESHIP_PLAYER_H
#define BATTLESHIP_PLAYER_H
#include "Player.h"
#include "Battleship.h"
#include <string>

class Player {
public:

    Player();
    Player(std::string) ;

    void SetShips();

private:
    std::string _playerName;


};


#endif //BATTLESHIP_PLAYER_H
