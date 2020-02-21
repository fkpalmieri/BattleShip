//
// Created by keeganpalmieri on 2/19/20.
//

#ifndef BATTLESHIP_PLAYER_H
#define BATTLESHIP_PLAYER_H
#include "Player.h"
#include "Battleship.h"
#include <string>
#include <vector>

class Player {
public:

    Player(int, std::vector<int>);

    Player(std::string, int, std::vector<int>);

    void SetShips(std::vector<int>);

    void PlaceShip(int);

private:
    std::string _playerName;
    std::vector<std::pair<int,int>> _allShipLocations;
    int _boardSize;
    std::vector<int> _allShipHealth;
};


#endif //BATTLESHIP_PLAYER_H
