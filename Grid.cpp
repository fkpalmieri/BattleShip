//Grid.cpp
//Cody Abad & Keegan Palmieri
//CS 372 Spring 2020
//Implementation for Grid class

#include "Grid.h"

Grid::Grid() : _board(10){
	for (int i = 0; i < 10; i++) {
		_board[i] = vector<int>(10);
	}
}

Grid::Grid(int x) : _board(x){
	for (int i = 0; i < x; i++) {
		_board[i] = vector<int>(x);
	}
}


Grid::Grid(int x, int y) : _board(y){
	for (int i = 0; i < x; i++) {
		_board[i] = vector<int>(x);
	}
}

string Grid::boardSize(){
	string result("");
	result = to_string(_board[0].size()) + "x" + to_string(_board.size());
	return result;
}

void Grid::changeCoord(int x, int y, int s) {
	_board[y][x] = s;
};

string Grid::checkCoord(int x,int y){
	switch (_board[y][x]) {
	case 0:
		return "EMPTY";
	case 1:
		return "BOAT";
	case 2:
		return "HIT";
	case 3:
		return "MISS";
	default:
		return "ERROR";
	}
}
