//Grid_tests.cpp
//Cody Abad & Keegan Palmieri
//CS 372 Spring 2020
//Test cases for Grid class

#define CATCH_CONFIG_MAIN  
#include "catch.hpp"

#include "Grid.h"


TEST_CASE("Constructors create boards of the appropriate size") {
    Grid g;
    Grid h(5);
    Grid j(6, 7);
    REQUIRE(g.boardSize() == "10x10");
    REQUIRE(h.boardSize() == "5x5");
    REQUIRE(j.boardSize() == "6x7");
}

TEST_CASE("Grid can be manipulated") {
    Grid g;
    g.changeCoord(5, 5, 1);
    g.changeCoord(2, 4, 2);
    g.changeCoord(7, 4, 3);
    REQUIRE(g.checkCoord(1, 1) == "EMPTY");
    REQUIRE(g.checkCoord(5, 5) == "BOAT");
    REQUIRE(g.checkCoord(2, 4) == "HIT");
    REQUIRE(g.checkCoord(7, 4) == "MISS");
}