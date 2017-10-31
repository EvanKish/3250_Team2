/**
 * @file matrices.c
 * @description Functions to mutate matrices
 * @author
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

Matrix* createMatrix(int rows, int cols) {
    Matrix* matrix = malloc(sizeof(Matrix));
    matrix->cells = malloc(sizeof(double*) * rows);
    
    for(int row = 0; row < rows; row++) {
        matrix->cells[row] = malloc(sizeof(double) * cols);
    }
    
    matrix->cols = cols;
    matrix->rows = rows;
    return matrix;
}

void deleteMatrix(Matrix* matrix) {
    for(int row = 0; row < matrix->rows; row++) {
        free(matrix->cells[row]);
    }
    
    free(matrix->cells);
    free(matrix);
}

Matrix* inputMatrix(int rows, int cols) {
    Matrix* matrix = createMatrix(rows, cols);
    
    printf("Input matrix:\n");
    
    for(int x = 0; x < rows; x++) {
        printf("Enter the members of row %d:\n", x + 1);
        
        for(int y = 0; y < cols; y++) {
            printf("Member %d\n", y + 1);
            matrixSetCell(matrix, x, y, scanSafeDouble(": ", "Try again: "));
        }
    }
    
    return matrix;
}

double matrixGetCell(Matrix* matrix, int row, int col) {
    double value = 0;
    
    if(row >= 0 && col >= 0 && row < matrix->rows && col < matrix->cols) {
        value = matrix->cells[row][col];
    } else {
        printf("ERROR: Matrix out of bounds get.\n");
    }
    
    return value;
}

void matrixSetCell(Matrix* matrix, int row, int col, double value) {
    if(row >= 0 && col >= 0 && row < matrix->rows && col < matrix->cols) {
        matrix->cells[row][col] = value;
    } else {
        printf("ERROR: Matrix out of bounds set.\n");
    }
}

void printMatrix(Matrix* matrix) {
    for(int row = 0; row < matrix->rows; row++) {
        for(int col = 0; col < matrix->cols; col++) {
            printf("%4.1lf ", matrix->cells[row][col]);
        }
        printf("\n");
    }
}

void matrixSum() {
    int matrix1Rows;
    int matrix1Cols;
    int matrix2Rows;
    int matrix2Cols;
    
    matrix1Rows = scanSafeInt("Enter the number of rows of matrix 1: ", "");
    matrix1Cols = scanSafeInt("Enter the number of columns of matrix 1: ", "");
    matrix2Rows = scanSafeInt("Enter the number of rows of matrix 2: ", "");
    matrix2Cols = scanSafeInt("Enter the number of columns of matrix 2: ", "");
        
    if(!(matrix1Rows == matrix2Rows && matrix1Cols == matrix2Cols)) {
        printf("The matrices are incompatible.");
        return;
    }
    
    Matrix* matrix1 = inputMatrix(matrix1Rows, matrix1Cols);
    Matrix* matrix2 = inputMatrix(matrix1Rows, matrix1Cols);
    Matrix* matrixResult = createMatrix(matrix1Rows, matrix1Cols);
    
    for(int row = 0; row < matrixResult->rows; row++) {
        for(int col = 0; col < matrixResult->cols; col++) {
            matrixSetCell(matrixResult, row, col, matrixGetCell(matrix1, row, col) + matrixGetCell(matrix2, row, col));
        }
    }
    
    printMatrix(matrixResult);
    
    deleteMatrix(matrix1);
    deleteMatrix(matrix2);
    deleteMatrix(matrixResult);
}

void matrixProduct() {
    int matrix1Rows;
    int matrix1Cols;
    int matrix2Rows;
    int matrix2Cols;
    
    matrix1Rows = scanSafeInt("Enter the number of rows of matrix 1: ", "");
    matrix1Cols = scanSafeInt("Enter the number of columns of matrix 1: ", "");
    matrix2Rows = scanSafeInt("Enter the number of rows of matrix 2: ", "");
    matrix2Cols = scanSafeInt("Enter the number of columns of matrix 2: ", "");
    
    if(!(matrix1Rows == matrix2Cols)) {
        printf("The matrices are incompatible.");
        return;
    }
    
    Matrix* matrix1 = inputMatrix(matrix1Rows, matrix1Cols);
    Matrix* matrix2 = inputMatrix(matrix2Rows, matrix2Cols);
    Matrix* matrixResult = createMatrix(matrix1Rows, matrix2Cols);
    int terms = matrix1->cols;
    
    for(int row = 0; row < matrixResult->rows; row++) {
        for(int col = 0; col < matrixResult->cols; col++) {
            double product = 0;
            
            for(int i = 0; i < terms; i++) {
                product +=
                    matrixGetCell(matrix1, row, i) *
                    matrixGetCell(matrix2, i, col);
            }
            
            matrixSetCell(matrixResult, row, col, product);
        }
    }
    
    printMatrix(matrixResult);
    
    deleteMatrix(matrix1);
    deleteMatrix(matrix2);
    deleteMatrix(matrixResult);
}

void matrixTranspose() {
    int matrixRows;
    int matrixCols;
    
    matrixRows = scanSafeInt("Enter the number of rows of the matrix: ", "");
    matrixCols = scanSafeInt("Enter the number of columns of the matrix: ", "");
    
    Matrix* matrix = inputMatrix(matrixRows, matrixCols);
    
    printf("The transposed matrix is: \n");
    
    for(int col = 0; col < matrix->cols; col++) {
        for(int row = 0; row < matrix->rows; row++) {
            printf("%4.1lf ", matrix->cells[row][col]);
        }
        printf("\n");
    }
}

int scanSafeInt(char* message, char* tryAgainMessage) {
    int success = 0;
    int number = 0;
    int attempts = 0;
    
    while(!success) {
        if(attempts == 0 || tryAgainMessage[0] == '\0') {
            printf(message);
        } else {
            printf(tryAgainMessage);
        }
        
        success = scanf("%d", &number);
        
        if(!success) {
            char trash[40];
            scanf("%s", trash);
        }
        
        attempts++;
    }
    
    return number;
}

double scanSafeDouble(char* message, char* tryAgainMessage) {
    int success = 0;
    double number = 0;
    int attempts = 0;
    
    while(!success) {
        if(attempts == 0 || tryAgainMessage[0] == '\0') {
            printf(message);
        } else {
            printf(tryAgainMessage);
        }
        
        success = scanf("%lf", &number);
        
        if(!success) {
            char trash[40];
            scanf("%s", trash);
        }
        
        attempts++;
    }
    
    return number;
}