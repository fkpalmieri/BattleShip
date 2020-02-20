//
// Created by keeganpalmieri on 2/19/20.
//

#include "SetUp.h"


    SetUp::SetUp(): _boardSize(0) {
    WelcomeScreen();
    GameSettings();
}

    void SetUp::WelcomeScreen() {
    // TODO : Write, basic welcome and explain rules

};

    void SetUp::GameSettings() {
        //what board size?
        int inputSize = 0;
        std::cin >> inputSize;
        ChangeBoardSize(inputSize);
        // Player Names
        SetPlayerName();
    }

void SetUp::ChangeBoardSize(int x) {
        _boardSize = (x-1);
}

int SetUp::GetBoardSize() {
    return _boardSize;
}

void SetUp::SetPlayerName() {
        // please type player one's name then press enter
        std::string p1name;
        _playerNames.push_back(p1name);
        //p2name?
        std::string p2name;
        _playerNames.push_back(p2name);
};

std::vector<std::string> SetUp::GetPlayerName() {
        return _playerNames;
};
