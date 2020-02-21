// Battleship.h
// Created by Cody Abad and Keegan Palmieri
// CS 372 Software Construction

#ifndef BATTLESHIP_BATTLESHIP_H
#define BATTLESHIP_BATTLESHIP_H
#include "SetUp.h"
#include "Grid.h"
#include "catch.hpp"

class Battleship {
public:
    Battleship();

    //shows hits and misses and own board for player 1
    void Screen1();

    //shows hits and misses and own board for player 2
    void Screen2();

    void Turn1();

    void Turn2();

    std::pair<int, int> input();

    bool Done();

private:
    int _totalTurns1 = 0;
    int _totalTurns2 = 0;
    int _player1Health = 17;
    int _player2Health = 17;
    std::string _player1name;
    std::string _player2name;
    Grid _player1;
    Grid _player2;
};


#endif //BATTLESHIP_BATTLESHIP_H
