// CSC 2110/2111 - Group #7
// Akshat S. 
#pragma once
#include<cstdlib>
#include<fstream>
#include<iostream>
#include "position.h"
#include<string>
using namespace std;

class cell :public position {
private:
	int cellType;
public:
	void setCellType(int acellType);
	int getCellType();
	cell();
};
