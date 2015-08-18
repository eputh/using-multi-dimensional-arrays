//
// Name: Emily Puth
// ID: 28239807
//

#include "magic-square.hpp"

void printGrid(int arr[][3]) {
	for (int r=0; r<3; r++)
		for (int c=0; c<3; c++)
			std::cout << " grid[" << r << "][" << c << "] = " << arr[r][c] << std::endl;
}


bool hasValidNumbers(int arr[][3]) {
	for (int r=0; r<3; r++)
		for (int c=0; c<3; c++)
			if (arr[r][c] > 9)
				return false;
	return true;
}


int getRowTotal(int arr[][3], int whichRow) {
	int rowTotal = 0;
	for (int c=0; c<3; c++)
		rowTotal += arr[whichRow][c];
	return rowTotal;
}


int getColumnTotal(int arr[][3], int whichCol) {
	int colTotal = 0;
	for (int r=0; r<3; r++)
		colTotal += arr[r][whichCol];
	return colTotal;
}


int getDiagonalTotal(int arr[][3], std::string direction) {
	int diagTotal = 0;
	if (direction == "left") {
		for (int i=0; i<3; i++)
			diagTotal += arr[i][i];
	}
	if (direction == "right") {
		int i = 2;
		for (int r=0; r<3; r++) {
			diagTotal += arr[r][i]; i--;}
	}
	return diagTotal;
}


bool addsUpToFifteen(int arr[][3]) {
	for (int i=0; i<3; i++) {
		if (getRowTotal(arr, i) != 15)
			return false;
		if (getColumnTotal(arr, i) != 15)
			return false;
	}
	if (getDiagonalTotal(arr, "left") != 15)
		return false;
	if (getDiagonalTotal(arr, "right") != 15)
		return false;
	return true;
}


bool isMagicSquare(std::string filename) {
	int grid[3][3]; 
	std::ifstream myfile(filename);
	if (myfile.is_open()) {
		for (int r=0; r < 3; r++)  
			for (int c=0; c < 3; c++)
				myfile >> grid[r][c];
	}
	if (hasValidNumbers(grid) && addsUpToFifteen(grid))
		return true;
	return false;
}
