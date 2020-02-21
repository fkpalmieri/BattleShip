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
	for (int i = 0; i < y; i++) {
		_board[i] = vector<int>(x);
	}
}

string Grid::boardSize(){
	string result("");
	result = to_string(_board[0].size()) + "x" + to_string(_board.size());
	return result;
}

int Grid::getHeight(){
	return _board.size();
}

int Grid::getWidth(){
	return _board[0].size();
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
	case 4:
		return "OVERLAP";
	default:
		return "ERROR";
	}
}

void Grid::printBoard() {
	cout << "  ";
	for (int i = 0; i < _board[0].size(); i++) {
		cout << " " << static_cast<char>('A' + i) << " ";
	}
	cout << endl;
	for (int i = 0; i < _board.size(); i++) {
		cout << i+1;
		if (i < 9)
			cout << " ";
		for (int j = 0; j < _board[0].size(); j++) {
			switch (_board[i][j]) {
			case(0):
				cout << "|_|";
				break;
			case(1):
				cout << "|B|";
				break;
			case(2):
				cout << "|X|";
				break;
			case(3):
				cout << "|O|";
				break;
			case(4):
				cout << "|V|";
				break;
			default:
				cout << "|_|";
				break;
			}
			
		}
		cout << endl;
	}
}
