//
// Name: Emily Puth
// ID: 28239807
//
// This program hold the main method for
// problems 1, 2, and 3.

#include <iostream>
#include <fstream>

#include "tests.h"


int main() {
	// TEST PROBLEM ONE
	std:: cout << "\nBeginning Magic Square Tests" << std::endl;
	
	std::cout << "    Test 1: (should be a magic square) ";
	if (testMagicSquare_notMagic("test1-lu-shu-magic-square.txt")) std::cout << "Failed. Not a Magic Square" << std::endl;
	else std::cout << "Success. Is a Lu Shu Magic Square" << std::endl;

	std::cout << "    Test 2: (should not be a magic square) ";
	if (testMagicSquare_notMagic("test2-lu-shu-magic-square.txt")) std::cout << "Failed. Not a Magic Square" << std::endl;
	else std::cout << "Success. Is a Lu Shu Magic Square" << std::endl;

	std::cout << "    Test 3: (should not be a magic square) ";
	if (testMagicSquare_notMagic("test3-lu-shu-magic-square.txt")) std::cout << "Failed. Not a Magic Square" << std::endl;	
	else std::cout << "Success. Is a Lu Shu Magic Square" << std::endl;

	std::cout << "Finished Magic Square Tests" << std::endl;


	// TEST PROBLEM TWO
	std::cout << "\nBeginning Array Stats Tests" << std::endl;
	
	// set up 2D array
	int rows = 3; int cols = 5;
	double **grid = new double *[rows];
	for (int i=0; i<rows; i++) grid[i] = new double [cols];
	double toAdd = 10;
	for (int r=0; r<rows; r++) for (int c=0; c<cols; c++) {grid[r][c] = toAdd; toAdd++;}
	
	// print grid onto console
	for (int r=0; r<rows; r++) {
		for (int c=0; c<cols; c++)
			std::cout << grid[r][c] << " ";
		std::cout << "\n";
	}

	std::cout << "\n    Test 1: (getTotal; expected: 255) ";
	if (testGetTotal(255, grid, rows, cols)) std::cout << "Total is 255" << std::endl;
	else std::cout << "Incorrect total" << std::endl;

	std::cout << "    Test 2: (getAverage; expected: 17) ";
	if (testGetAverage(17, grid, rows, cols)) std::cout << "Average is 17" << std::endl;
	else std::cout << "Incorrect average" << std::endl;

	std::cout << "    Test 3: (getRowTotal; expected: 60 for row 1) ";
	if (testGetRowTotal(60, grid, rows, cols, 1)) std::cout << "Total for row 1 is 60" << std::endl;
	else std::cout << "Incorrect row total" << std::endl;

	std::cout << "    Test 4: (getColumnTotal; expected: 45 for column 1) ";
	if (testGetColumnTotal(45, grid, rows, cols, 1)) std::cout << "Total for column 1 is 45" << std::endl;
	else std::cout << "Incorrect column total" << std::endl;

	std::cout << "    Test 5: (getHighestInRow; expected: 24 for row 3) ";
	if (testGetHighestInRow(24, grid, rows, cols, 3)) std::cout << "Highest in row 3 is 24" << std::endl;
	else std::cout << "Incorrect highest value" << std::endl;

	std::cout << "    Test 6: (getLowestInRow; expected: 1 for row 10) ";
	if (testGetLowestInRow(10, grid, rows, cols, 1)) std::cout << "Lowest in row 1 is 10" << std::endl;
	else std::cout << "Incorrect lowest value" << std::endl;
	
	std::cout << "Finished Arrray Stats Tests" << std::endl;


	// TEST PROBLEM THREE
	std::cout << "\nBeginning Reverse CString Tests" << std::endl;
	
	std::cout << "    Test 1: 'hello' ";
	char hello[] = "hello"; char helloExpected[] = "olleh";
	if (!testReverseCString_notReverse(hello, helloExpected)) std::cout << "reversed is '" << helloExpected << "'" << std::endl; else std::cout << "Function failed." << std::endl;

	std::cout << "    Test 2: 'watermelon' ";
	char watermelon[] = "watermelon"; char watermelonExpected[] = "nolemretaw";
	if (!testReverseCString_notReverse(watermelon, watermelonExpected)) std::cout << "reversed is '" << watermelonExpected << "'" << std::endl; else std::cout << "Function failed." << std::endl;

	std::cout << "    Test 3: 'blahblahblah' ";
	char s[] = "blahblahblah"; char sExpected[] = "halbhalbhalb";
	if (!testReverseCString_notReverse(s, sExpected)) std::cout << "reversed is '" << sExpected << "'" << std::endl; else std::cout << "Function failed." << std::endl;
	return 0;
}
