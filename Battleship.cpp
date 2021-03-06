// Battleship.cpp
// Created by Cody Abad and Keegan Palmieri
// CS 372 Software Construction

#include "Battleship.h"


#include<string>
using std::string;

Battleship::Battleship(){
    SetUp Base;
     auto playerNames = Base.GetPlayerName();
    _player1name = playerNames[0];
    _player2name = playerNames[1];

    _player1 = Base.returnGrid(1);
    _player2 = Base.returnGrid(2);

}

void Battleship::Screen1() {
    _player2.opponentBoard();
    _player1.printBoard();
}

void Battleship::Screen2() {
    _player1.opponentBoard();
    _player2.printBoard();
}

void Battleship::Turn1() {
    cout << _player1name << endl;

    Screen1();

    std::pair<int, int> coords = input();
    bool Hit = true;
    while (Hit) {
        switch (_player2.checkCoord(coords.first, coords.second)) {
        case(0):
            cout << "Miss!" << endl;
            _totalTurns1++;
            Hit = false;
            _player2.changeCoord(coords.first, coords.second, 3);
            break;
        case(1):
            cout << "Hit!" << endl;
            _player2Health--;
            _totalTurns1++;
            Hit = false;
            _player2.changeCoord(coords.first, coords.second, 2);
            break;
        default:
            cout << "You've already shot there..." << endl;
            coords = input();
            break;
        }
    }
    system("CLS");
}

void Battleship::Turn2(){
    cout << _player2name << endl;
    Screen2();

    std::pair<int, int> coords = input();
    bool Hit = true;
    while (Hit) {
        switch (_player1.checkCoord(coords.first,coords.second)) {
        case(0):
            cout << "Miss!" << endl;
            _totalTurns2++;
            Hit = false;
            _player1.changeCoord(coords.first, coords.second, 3);
            break;
        case(1):
            cout << "Hit!" << endl;
            _player1Health--;
            _totalTurns2++;
            Hit = false;
            _player1.changeCoord(coords.first, coords.second, 2);
            break;
        default:
            cout << "You've already shot there..." << endl;
            coords = input();
            break;
        }
    }
    system("CLS");
}

std::pair<int, int> Battleship::input(){
    int x;
    int y;
    char a;
    cout << "enter x coord:";
    std::cin >> a;
    cout << endl;
    cout << "enter y coord:";
    std::cin >> y;
    cout << endl;
    y--;
    x = a - 65;
    return std::pair<int, int>(x,y);
}

bool Battleship::Done(){
    if (_player1Health <= 0) {
        return false;
    }
    if (_player2Health <= 0) {
        return false;
    }
    else {
        return true;
    }
}


