//
// Created by keeganpalmieri on 2/19/20.
//

#include "Ship.h"
#include "Battleship.h"

Ship::Ship() {

}

void Ship::PlaceAircraftCarrier(Grid) {
    // please specify a starting point

    // input x-value
    int x = 0;
    std::cin >> x;
    // input y-value
    int y = 0;
    std::cin >> y;

    // would you like to orient your ships vertically or horizontally
    char ori;
    std::cin >> ori;

    if(ori == 'v'){

            for(int i=0; i < 5; ++i){

            }
        

    }

}

void Ship::placeShip(Grid &g,int boat){
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
                    if (g.checkCoord(currPos.first, currPos.second+i) == 4) {
                        g.changeCoord(currPos.first, currPos.second + i, 1);
                    }
                    else
                        g.changeCoord(currPos.first, currPos.second + i, 0);
                }
                currPos.second--;
                for (int i = 0; i < boat; i++) {
                    if (g.checkCoord(currPos.first, currPos.second+i) == 1) {
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
                if (currPos.first == maxPos.second-1) {
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
                    if (g.checkCoord(currPos.first+i, currPos.second) == 1) {
                        g.changeCoord(currPos.first+i, currPos.second, 4);
                    }
                    else
                        g.changeCoord(currPos.first+i, currPos.second, 1);
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
                if (currPos.second== maxPos.second-1) {
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
                if (currPos.first+(boat-1) == maxPos.second - 1) {
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

void Ship::PlaceCruiser(Grid g){
}

void Ship::PlaceSubmarine(Grid g){
}

void Ship::PlaceDestroyer(Grid g){
}
