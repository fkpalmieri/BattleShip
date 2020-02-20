//
// Created by keeganpalmieri on 2/19/20.
//

#include "Player.h"
#include <utility>

Player::Player(): _playerName(" /* Random Name */ ") {
    SetShips();

}

Player::Player(std::string str): _playerName(std::move(str)){
    SetShips();

}

void Player::SetShips() {


}
