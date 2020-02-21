//
// Created by keeganpalmieri on 2/19/20.
//

#include "Battleship.h"

Battleship::Battleship(): _board(0){
    SetUp Base;
    _board = Base.GetBoardSize();
    _playerNames = Base.GetPlayerName();
    _player1name = _playerNames[0];
    _player2name = _playerNames[1];
    _shipSizes = Base.GetShipTypes();

    Player Player1(_player1name, _board, _shipSizes);
    Player Player2(_player2name, _board, _shipSizes);

}

