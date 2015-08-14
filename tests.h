//
// Name: Emily Puth
// ID: 28239807
//
// Test function declarations

#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include <fstream>

#include "magic-square.hpp"
#include "problem-two.hpp"
#include "problem-three.hpp"

// Returns true if isMagicSquare returns false
// Prints out the grid if it is a Lu Shu Magic Square
bool testMagicSquare_notMagic(std::string filename);

// Returns true if the total is the expected value (total)
bool testGetTotal(double total, double **arr, int numRows, int numCols);

// Returns true if the average is the expected value (average)
bool testGetAverage(double average, double **arr, int numRows, int numCols);

// Returns true if the row total is the expected value (rowTotal)
bool testGetRowTotal(double rowTotal, double **arr, int numRows, int numCols, int whichRow);

// Returns true if the column total is the expected value (colTotal)
bool testGetColumnTotal(double colTotal, double **arr, int numRows, int numCols, int whichCol);

//Returns true if the highest in the row is the expected value (highest)
bool testGetHighestInRow(double highest, double **arr, int numRows, int numCols, int whichRow);

// Returns true if the lowest in the row is the expected value (lowest)
bool testGetLowestInRow(double lowest, double **arr, int numRows, int numCols, int whichRow);

//Returns true if arr passes all of the test cases
// arr: the array to test; array contains negative numbers
bool testArrayStats_negativeNumbers(double arr[][15]);


// TEST PROBLEM 3
// Returns true if the actual output does not match 
// the expected output
bool testReverseCString_notReverse(char word[], char expected[]);


#endif
