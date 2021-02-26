// CSC 2110/2111 - Group #7
// Akshat S. 
#include<cstdlib>
#include<fstream>
#include<iostream>
#include "cell.h"
#include<string>
using namespace std;

void cell::setCellType(int acellType) {
	cellType = acellType;
}

int cell::getCellType() {
	return cellType;
}

cell::cell() {
	cellType = 0;
}