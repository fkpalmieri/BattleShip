//
// Created by keeganpalmieri on 2/19/20.
//

#include "SetUp.h"


    SetUp::SetUp(): _boardSize(0), _shipSizes{5,4,3,3,2} {
    WelcomeScreen();
    GameSettings();
}

    void SetUp::WelcomeScreen() {
    // TODO : Write, basic welcome and explain rules

};

    void SetUp::GameSettings() {
        // TODO-- user prompting
        //what board size?
        int inputSize = 0;
        std::cin >> inputSize;
        ChangeBoardSize(inputSize);
        // Player Names
        SetPlayerName();
        // Get size of boats
        ShipTypes();
    }

void SetUp::ChangeBoardSize(int x) {
        _boardSize = (x-1);
}

int SetUp::GetBoardSize() {
    return _boardSize;
}

void SetUp::SetPlayerName() {
       // TODO-- user prompting
        // please type player one's name then press enter
        std::string p1name;
        _playerNames.push_back(p1name);
        //p2name?
        std::string p2name;
        _playerNames.push_back(p2name);
};

std::vector<std::string> SetUp::GetPlayerName() {
        return _playerNames;
}

void SetUp::ShipTypes() {
    // TODO-- user prompting
    // type 0 for default
    // what kind of ships do you want? enter their sizes one at a time when you're done enter 0
    int counter = 0;

    while (true) {
        int input = 0;
        std::cout<< "please enter a number or 0 to exit"<<std::endl;
        std::cin >> input;
        if (input == 0) {
            return;
        }
        if(counter > 4){
            _shipSizes.push_back(input);
        }
        else {
            _shipSizes[counter] = input;
        }
        ++counter;
    };

}

std::vector<int> SetUp::GetShipTypes() {
    return _shipSizes;
};
