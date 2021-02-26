// CSC 2110/2111 - Group #7
// Akshat S. 
#include<cstdlib>
#include<iostream>
#include "position.h"
#include<string>
using namespace std;

void position::setColumn(int acolumn) {
	column = acolumn;
}

void position::setRow(int arow) {
	row = arow;
}

int position::getColumn() {
	return column;
}

int position::getRow() {
	return row;
}

position::position() {
	column = 0;
	row = 0;
}

position::position(int arow, int acolumn) {
	column = acolumn;
	row = arow;
}