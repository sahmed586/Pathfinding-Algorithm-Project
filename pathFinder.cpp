// CSC 2110-2111 - Group #7
//Akansha A, Sadia A
//pathfinder.cpp

#include <iostream>
#include "pathfinder.h"
using namespace std;

void pathfinder::display() {

    cout << "(" << currentPosition.getRow() << ",";
    cout << currentPosition.getColumn() << ")";
}

// Recursive Function Utilized in the DFSearch function below
bool pathfinder::DFSUtil(int row, int col) {

    if (row < 0 || col < 0 || row >= 5 || col >= 6) {
      
        return false;
    }
    else if (map[row][col].getCellType() == 1) {

        return false;
    }
    // visited the cell 
    else if (map[row][col].getCellType() == 3) {

        return false;
    }

    else if (map[row][col].getCellType() == 2) {
    
        currentPosition.setRow(row);
        currentPosition.setColumn(col);
        display(); 
        return true;
    }

 
    map[row][col].setCellType(3);
 
    // downward search
    if (DFSUtil(row - 1, col)) {
        cout << " -> ";
  
        currentPosition.setRow(row);
        currentPosition.setColumn(col);
        display(); 
        return true;
    }
    // upward search 
    if (DFSUtil(row + 1, col)) {
        cout << " -> ";
  
        currentPosition.setRow(row);
        currentPosition.setColumn(col);
        display(); 
        return true;
    }
    // search left
    if (DFSUtil(row, col - 1)) {
        cout << " -> ";
  
        currentPosition.setRow(row);
        currentPosition.setColumn(col);
        display(); 
        return true;
    }
    // search right
    if (DFSUtil(row, col + 1)) {
        cout << " -> ";
   
        currentPosition.setRow(row);
        currentPosition.setColumn(col);
        display();
        return true;
    }
    // path not found 
    map[row][col].setCellType(0);
    return false;
}

// depth first search algorithm
void pathfinder::search() {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cout << map[i][j].getCellType() << " ";
        }
        cout << "\n";
    }
 
    cout << "\nInitial position row = " << currentPosition.getRow();
    cout << ", column = " << currentPosition.getColumn() << "\nSolution:\n "; 
    DFSUtil(currentPosition.getRow(), currentPosition.getColumn());
}

// initializing the currentPosition and map ptr
pathfinder::pathfinder(cell** pmap, int initialColumn, int initialRow) {

    currentPosition.setColumn(initialColumn);
    currentPosition.setRow(initialRow);
    map = pmap;
}

