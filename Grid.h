//Grid.h
//Cody Abad & Keegan Palmieri
//CS 372 Spring 2020
//Header for Grid class

#ifndef GRID_H_
#define GRID_H_

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::to_string;

#include <algorithm>


class Grid {
public:

	//Constructors
	
	//Creates a 10x10 board
	Grid();
	
	//Creates a square board with size as width and height
	Grid(int size);
	
	//Creates a board with width as width and height as height
	Grid(int width, int height);


	//Member functions

	//Returns width and height in the form "WIDTHxHEIGHT"
	string boardSize();

	//x and y chooses a coordinate, s is what that coordinate becomes
	void changeCoord(int x,int y,int s);
	//returns either "EMPTY","BOAT","HIT", or "MISS" depending on value at given coordinates
	string checkCoord(int x,int y);

private:
	//2D vector
	using gridType = vector<vector<int>>;
	gridType _board;
};


#endif