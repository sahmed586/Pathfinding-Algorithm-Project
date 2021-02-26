// CSC 2110/2111 - Group #7
// Akshat S. 
#pragma once
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

class position {
private:
	int column;
	int row;
public:
	void setColumn(int acolumn);
	void setRow(int arow);
	int getColumn();
	int getRow();
	position();
	position(int arow, int acolumn);
};
