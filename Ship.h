//
// Created by keeganpalmieri on 2/19/20.
//

#ifndef BATTLESHIP_SHIP_H
#define BATTLESHIP_SHIP_H

#include "Battleship.h"
#include "Grid.h"

class Ship {
public:
    Ship();

    void PlaceAircraftCarrier(Grid);

    void placeShip(Grid &,int);

    void PlaceCruiser(Grid);

    void PlaceSubmarine(Grid);

    void PlaceDestroyer(Grid);

private:

    std::vector<std::pair<int, int>> _totalLocation;

};


#endif //BATTLESHIP_SHIP_H
