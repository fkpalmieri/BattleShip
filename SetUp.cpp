//
// Created by keeganpalmieri on 2/19/20.
//

#include "SetUp.h"

SetUp::SetUp() : _boardSize(0), _shipSizes{ 5,4,3,3,2 } {
    WelcomeScreen();
    GameSettings();
    placeShip(_player1, _shipSizes[0], _playerNames[0]);
    placeShip(_player1, _shipSizes[1], _playerNames[0]);
    placeShip(_player1, _shipSizes[2], _playerNames[0]);
    placeShip(_player1, _shipSizes[3], _playerNames[0]);
    placeShip(_player1, _shipSizes[4], _playerNames[0]);
    placeShip(_player2, _shipSizes[0], _playerNames[1]);
    placeShip(_player2, _shipSizes[1], _playerNames[1]);
    placeShip(_player2, _shipSizes[2], _playerNames[1]);
    placeShip(_player2, _shipSizes[3], _playerNames[1]);
    placeShip(_player2, _shipSizes[4], _playerNames[1]);

}

void SetUp::WelcomeScreen() {
    // TODO : Write, basic welcome and explain rules
    cout << "Welcome to Battleship!" << endl;
    cout << "Choose a coordinate to fire at your opponent." << endl;
    cout << "If your opponent has a Ship in that location, it's a hit!" << endl;
};

    void SetUp::GameSettings() {
        // TODO-- user prompting
        cout << "how large would you like the boards?" << endl;
        int inputSize(0);
        std::cin >> inputSize;
        //ChangeBoardSize(inputSize);
        Grid temp(inputSize);
        _player1 = temp;
        _player2 = temp;

        // Player Names
        SetPlayerName();
        
        // Get size of boats
        //ShipTypes();
        system("CLS");
    }

void SetUp::ChangeBoardSize(int x) {
        _boardSize = (x-1);
}

void SetUp::placeShip(Grid &g, int boat, string name) {
    std::pair<int, int> maxPos(g.getWidth(), g.getHeight());
    std::pair<int, int> currPos(0, 0);
    bool Placed = true;
    char keyStroke;
    char Orientation('v');
    bool Overlap = false;
    for (int i = 0; i < boat; i++) {
        if (g.checkCoord(currPos.first, currPos.second + i) == 1) {
            g.changeCoord(currPos.first, currPos.second + i, 4);
        }
        else
            g.changeCoord(currPos.first, currPos.second + i, 1);
    }
    while (Placed) {
        cout << name << endl;
        g.printBoard();
        std::cin >> keyStroke;
        switch (Orientation) {
        case('v'):
            switch (keyStroke) {
            case('w'):
                if (currPos.second == 0) {
                    system("CLS");
                    break;
                }
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 4) {
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 0);
                }
                currPos.second--;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 1) {
                        g.changeCoord(currPos.first, currPos.second + i, 4);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                }
                system("CLS");
                break;
            case('s'):
                if (currPos.second + boat == maxPos.second) {
                    system("CLS");
                    break;
                }
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 4) {
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 0);
                }
                currPos.second++;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 1) {
                        g.changeCoord(currPos.first, currPos.second + i, 4);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                }
                system("CLS");
                break;
            case('a'):
                if (currPos.first == 0) {
                    system("CLS");
                    break;
                }
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 4) {
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 0);
                }
                currPos.first--;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 1) {
                        g.changeCoord(currPos.first, currPos.second + i, 4);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                }
                system("CLS");
                break;
            case('d'):
                if (currPos.first == maxPos.second - 1) {
                    system("CLS");
                    break;
                }
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 4) {
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 0);
                }
                currPos.first++;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 1) {
                        g.changeCoord(currPos.first, currPos.second + i, 4);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                }
                system("CLS");
                break;
            case('r'):
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 4) {
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 0);
                }
                Orientation = 'h';
                currPos.first = 0;
                currPos.second = 0;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 1) {
                        g.changeCoord(currPos.first + i, currPos.second, 4);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                }
                system("CLS");
                break;
            case('x'):
                for (int i = 0; i < g.getHeight(); i++) {
                    for (int j = 0; j < g.getWidth(); j++) {
                        if (g.checkCoord(j, i) == 4) {
                            system("CLS");
                            cout << "Cannot overlap boats." << endl;
                            Overlap = true;
                        }
                    }
                }
                if (Overlap) {
                    Overlap = false;
                    break;
                }
                else {
                    Placed = false;
                    system("CLS");
                    break;
                }
            }
            break;
        case('h'):
            switch (keyStroke) {
            case('w'):
                if (currPos.second == 0) {
                    system("CLS");
                    break;
                }
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 4) {
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 0);
                }
                currPos.second--;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 1) {
                        g.changeCoord(currPos.first + i, currPos.second, 4);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                }
                system("CLS");
                break;
            case('s'):
                if (currPos.second == maxPos.second - 1) {
                    system("CLS");
                    break;
                }
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 4) {
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 0);
                }
                currPos.second++;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 1) {
                        g.changeCoord(currPos.first + i, currPos.second, 4);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                }
                system("CLS");
                break;
            case('a'):
                if (currPos.first == 0) {
                    system("CLS");
                    break;
                }
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 4) {
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 0);
                }
                currPos.first--;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 1) {
                        g.changeCoord(currPos.first + i, currPos.second, 4);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                }
                system("CLS");
                break;
            case('d'):
                if (currPos.first + (boat - 1) == maxPos.second - 1) {
                    system("CLS");
                    break;
                }
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 4) {
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 0);
                }
                currPos.first++;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 1) {
                        g.changeCoord(currPos.first + i, currPos.second, 4);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                }
                system("CLS");
                break;
            case('r'):
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first + i, currPos.second) == 4) {
                        g.changeCoord(currPos.first + i, currPos.second, 1);
                    }
                    else
                        g.changeCoord(currPos.first + i, currPos.second, 0);
                }
                Orientation = 'v';
                currPos.first, currPos.second = 0, 0;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second + i) == 1) {
                        g.changeCoord(currPos.first, currPos.second + i, 4);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                }
                system("CLS");
                break;
            case('x'):
                for (int i = 0; i < g.getHeight(); i++) {
                    for (int j = 0; j < g.getWidth(); j++) {
                        if (g.checkCoord(j, i) == 4) {
                            system("CLS");
                            cout << "Cannot overlap boats." << endl;
                            Overlap = true;
                        }
                    }
                }
                if (Overlap) {
                    Overlap = false;
                    break;
                }
                else {
                    Placed = false;
                    system("CLS");
                    break;
                }
            }
        }
    }
}


int SetUp::GetBoardSize() {
    return _boardSize;
}

Grid SetUp::returnGrid(int x){
    if (x == 1)
        return _player1;
    else
        return _player2;
}



void SetUp::SetPlayerName() {
        cout << "Enter name for player 1:";
        std::string p1name;
        std::cin >> p1name;
        _playerNames.push_back(p1name);
        cout << "Enter name for player 2:";
        std::string p2name;
        std::cin >> p2name;
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
