//
// Created by keeganpalmieri on 2/19/20.
//

#include "Player.h"
#include <utility>

Player::Player(int boardSize, std::vector<int> shipHealth)
               : _playerName(" /* Random Name */ "), _boardSize(boardSize)
               , _allShipHealth(std::move(shipHealth)) {
    SetShips(_allShipHealth);

}

Player::Player(std::string str, int boardSize, std::vector<int> shipHealth)
               : _playerName(std::move(str)), _boardSize(boardSize), _allShipHealth(std::move(shipHealth)){
    SetShips(_allShipHealth);

}

void Player::SetShips(std::vector<int> HealthOfShips) {

    while (HealthOfShips.size() != HealthOfShips.empty()) {
        PlaceShip(HealthOfShips.back());
        HealthOfShips.pop_back();

    }
}

void Player::PlaceShip(int health) {

    // please specify a starting point
    // TODO-- user prompting
    // input x-value
    int x = 0;
    std::cin >> x;
    // input y-value
    int y = 0;
    std::cin >> y;

    // would you like to orient your ships vertically or horizontally
    char orientation;
    std::cin >> orientation;

    std::vector<std::pair<int,int>> singleShipLocation;

    // TODO:: PLACE SHIPS IS INCOMPLETE

    if(orientation == 'v') {
        if (_boardSize >= (y + health - 1)) {
            for (int i = 0; i < health; ++i) {
                singleShipLocation.push_back((std::make_pair(x, y + i)));     //push back pair of x, y then
            }

        }

    }

}
