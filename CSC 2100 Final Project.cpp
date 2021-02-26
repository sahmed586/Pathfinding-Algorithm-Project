// CSC 2100 Final Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Nusrat C. Sadia C.

#include <iostream>
#include "cell.h"
#include "position.h"
#include "pathfinder.h"


int main()
{
    // create a 2D array of cell objects of size of array is 5x6
    cell** map = new cell * [5];
    for (int i = 0; i < 5; i++) {
        
        map[i] = new cell[6]; //Creating new cell objects using default constructor 
    }

    //Get start position for path
    int row = 0;
    int column = 0;

    //Example 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (!(i == 1 || j == 4)) {
                map[i][j].setCellType(1);
            }
        }
    }
    map[0][4].setCellType(1);
    map[1][5].setCellType(1);
    map[4][4].setCellType(2);
    row = 1;
    //pathfinder object for example 1
    pathfinder ex1(map, column, row);
    cout << "Example 1:" << endl << endl;

    // search the path
    ex1.search();
    cout << endl << endl;

    //Example 2
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (!(i == 1 || j == 3)) {
                map[i][j].setCellType(1);
            }
            else {
                map[i][j].setCellType(0);
            }
        }
    }
    map[1][0].setCellType(1);
    map[2][0].setCellType(0);
    map[2][1].setCellType(0);
    map[2][5].setCellType(0);
    map[3][0].setCellType(0);
    map[4][3].setCellType(1);
    map[3][5].setCellType(2);
    row = 2;

    //pathfinder object for example 2
    pathfinder ex2(map, column, row);
    cout << "Example 2:" << endl << endl;

    //search the path
    ex2.search();
    cout << endl << endl;

    //Example 3
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (!(i == 2 || j == 1 || j == 3)) {
                map[i][j].setCellType(1);
            }
            else {
                map[i][j].setCellType(0);
            }
        }
    }
    map[0][1].setCellType(0);
    map[0][2].setCellType(0);
    map[1][1].setCellType(1);
    map[2][0].setCellType(1);
    map[3][1].setCellType(0);
    map[4][1].setCellType(0);
    map[4][3].setCellType(2);
    row = 2; column = 3;

    //pathfinder object foe example 3
    pathfinder ex3(map, column, row);
    cout << "Example 3:" << endl << endl;

    //search the path
    ex3.search();
    cout << endl << endl;

    // Example 4
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == 0 || i == 1 || j == 0 || j == 5) {
                map[i][j].setCellType(1);
            }
            else {
                map[i][j].setCellType(0);
            }
        }
    }
    map[1][2].setCellType(1);
    map[4][3].setCellType(2);
    row = 3; column = 1;
    //pathfinder object for example 4
    pathfinder ex4(map, column, row);
    cout << "Example 4:" << endl << endl;

    //search the path
    ex4.search();
    cout << endl << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
