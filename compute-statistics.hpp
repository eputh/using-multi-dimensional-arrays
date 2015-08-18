//
// Name: Emily Puth
// ID: 28239807
//
// Problem 2 computes statistics about a two-dimensional
// array of type double.

#ifndef PROBLEM_TWO_HPP_
#define PROBLEM_TWO_HPP_

// Returns the sum of all the values in the array
double getTotal(double **arr, int numRows, int numCols);

// Returns the average of all the values in the array
double getAverage(double **arr, int numRows, int numCols);

// Returns the sum of the values in the specified row
double getRowTotal(double **arr, int numRows, int numCols, int whichRow);

// Returns the sum of the values in the specified column
double getColumnTotal(double **arr, int numRows, int numCols, int whichCol);

// Returns the highest value in the specified row of the array
double getHighestInRow(double **arr, int numRows, int numCols, int whichRow);

// Returns the lowest value in the specified row of the array
double getLowestInRow(double **arr, int numRows, int numCols, int whichRow);


#endif /* PROBLEM_TWO_HPP_ */
