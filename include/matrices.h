/**
 * @file matrices.h
 * @description Functions to mutate matrices
 * @author
 */

#ifndef MATRICES_H
#define MATRICES_H

/**
 * Stores the size and data of a matrix
 */
typedef struct matrix {
    int rows;
    int cols;
    double** cells;
} Matrix;

/**
 * Creates a new matrix of that size
 * @param rows Number of rows
 * @param cols Number of cols
 */
Matrix* createMatrix(int rows, int cols);

/**
 * Deletes a matrix (frees the memory)
 * @param matrix The matrix to delete
 */
void deleteMatrix(Matrix* matrix);

/**
 * Creates a matrix through user input
 * @param rows Number of rows
 * @param cols Number of cols
 */
Matrix* inputMatrix(int rows, int cols);

/**
 * Returns the cell of a matrix at a specific position
 * @param matrix The matrix we're talking about
 * @param row The row to return from
 * @param col The col to return from
 */
double matrixGetCell(Matrix* matrix, int row, int col);

/**
 * Sets a cell of a matrix at a specific position
 * @param row The row to set
 * @param col The col to set
 * @param value The value to update to
 */
void matrixSetCell(Matrix* matrix, int row, int col, double value);

/**
 * Prints a matrix
 * @param matrix Matrix to print
 */
void printMatrix(Matrix* matrix);

/**
 * Sums two matrices
 * Takes input from user on stdin
 * Prints output to stdout
 */
void matrixSum();

/**
 * Calculates the product of two matrices
 * Takes input from user on stdin
 * Prints output to stdout
 */
void matrixProduct();

/**
 * Transposes a matrix
 * Takes input from user on stdin
 * Prints output to stdout
 */
void matrixTranspose();

/**
 * Scans one integer safely and repeats
 * the message until it receives it.
 * @param message Prompt for the input
 * @param tryAgainMessage Prompt for the input after the first try, empty string "" means use first message
 */
int scanSafeInt(char* message, char* tryAgainMessage);

/**
 * Scans one double safely and repeats
 * the message until it receives it.
 * @param message Prompt for the input
 * @param tryAgainMessage Prompt for the input after the first try, empty string "" means use first message
 */
double scanSafeDouble(char* message, char* tryAgainMessage);

#endif
