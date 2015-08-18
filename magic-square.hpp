//
// Name: Emily PUth
// ID: 28239807
//
// The Magic Square program reads a given file and
// determines whether the grid contained in the file
// is a Lo Shu Magic Square. A Lo Shu Magic Square 
// 3 X 3 grid (1) contains the numbers 1 through 9 exactly
// once AND (2) has a sum of 15 for each row, each column
// and each diagonal. 

#ifndef MAGIC_SQUARE_HPP_
#define MAGIC_SQUARE_HPP_

#include <iostream>
#include <fstream>

// Prints the grid's contents
void printGrid(int arr[][3]);

// Checks if all the numbers in the grid are
// between 1 and 9
bool hasValidNumbers(int arr[][3]);

// Returns the sum of the values in the specified row
int getRowTotal(int arr[][3], int whichRow);

// Returns the sum of the values in the specified column
int getColumnTotal(int arr[][3], int whichCol);

// Returns the sum of the values going diagonally left or right
int getDiagonalTotal(int arr[][3], std::string direction);

// Takes a row, column, or diagonal as a
// parameter and checks if the ints add
// up to 15, as they are supposed to (Lu
// Shu Magic Square rule)
bool addsUpToFifteen(int arg[]);

// Takes a filename as a parameter, opens the
// file, inserts the file data into a two-dimensional
// array, and checks whether the grid is a Lu Shu
// Magic Square
bool isMagicSquare(std::string filename);


#endif /* MAGIC_SQUARE_HPP_ */
