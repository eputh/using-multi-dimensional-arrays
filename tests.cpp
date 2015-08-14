//
// Name: Emily Puth
// ID: 28239807
// 
// Test function definitions

#include <iostream>
#include "tests.h"


bool testMagicSquare_notMagic(std::string filename) {
	if (isMagicSquare(filename))
		return false;
	return true;
}

bool testGetTotal(double total, double **arr, int numRows, int numCols) {
	return getTotal(arr, numRows, numCols) == total;
}

bool testGetAverage(double average, double **arr, int numRows, int numCols) {
	return getAverage(arr, numRows, numCols) == average;
}

bool testGetRowTotal(double rowTotal, double **arr, int numRows, int numCols, int whichRow) {
	return getRowTotal(arr, numRows, numCols, whichRow) == rowTotal;
}

bool testGetColumnTotal(double colTotal, double **arr, int numRows, int numCols, int whichCol) {
	return getColumnTotal(arr, numRows, numCols, whichCol) == colTotal;
}

bool testGetHighestInRow(double highest, double **arr, int numRows, int numCols, int whichRow) {
	return getHighestInRow(arr, numRows, numCols, whichRow) == highest;
}

bool testGetLowestInRow(double lowest, double **arr, int numRows, int numCols, int whichRow) {
	return getLowestInRow(arr, numRows, numCols, whichRow) == lowest;
}

bool testArrayStats_negativeNumbers(double arr[][15]) {}

bool testReverseCString_notReverse(char word[], char expected[]) {
	char* actual = reverseCString(word);
	return strcmp(actual, expected) != 0;
}
