// CSC 2110-2111 - Group #7
//Akansha A, Sadia A
// pathfinder.h 

#pragma once
#include <iostream>
#include "cell.h"
using namespace std;

class pathfinder{
private:
   cell * *map; // pointer to 2D array of cell objects
   position currentPosition; // current position in path
   void display(); // prints path
   bool DFSUtil(int row, int col); // helper function
public:
   void search(); // get path from initial postion to goal
   // constructor
   pathfinder(cell** pmap, int initialColumn, int initialRow);
};