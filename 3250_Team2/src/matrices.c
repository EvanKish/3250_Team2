/**
 * @file matrices.c
 * @description Functions to mutate matrices
 * @author
 */

#include <stdio.h>
#include "matrices.h"

void matrixSum() {
    int matrix1Rows, matrix1Cols, matrix2Rows, matrix2Cols;
    
    printf("Enter the number of rows of matrix 1:");
    scanf("%d", &matrix1Rows);
    printf("Enter the number of columns of matrix :");
    scanf("%d", &matrix1Cols);
    printf("Enter the number of rows of matrix 2:");
    scanf("%d", &matrix2Rows);
    printf("Enter the number of columns of matrix 2:");
    scanf("%d", &matrix2Cols);
    
    if(matrix1Rows == matrix2Rows && matrix1Cols == matrix2Cols) {
        float matrix1[matrix1Rows][matrix1Cols];
        float matrix2[matrix2Rows][matrix2Cols];
        float matrixResult[matrix1Rows][matrix1Cols];

        for(int i = 0; i < matrix1Rows; i++) {
            printf("Enter the members of matrix 1 row %d :", i + 1);
            
            for(int j = 0; j < matrix1Cols; j++) {
                scanf("%f", &matrix1[i][j]);
            }
        }
        
        for(int i = 0; i < matrix2Rows; i++) {
            printf("Enter the members of matrix 2 row %d :", i + 1);
            
            for(int j = 0; j < matrix2Cols; j++) {
                scanf("%f", &matrix2[i][j]);
            }
        }
        
        for(int i = 0; i < matrix1Rows; i++) {
            for(int j = 0; j < matrix1Cols; j++) {
                matrixResult[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        
        printf("The sum of both matrices is\n:");
        
        for(int j = 0; j < matrix1Cols; j++) {
            for(int i = 0; i < matrix1Rows; i++) {
                printf("\t\t %.0f", matrixResult[i][j]);
            }
            
            printf("\n");
        }
    } else {
        printf("\n\tThe matrices are incompatible");
    }
}

void matrixProduct() {
    int matrix1Rows, matrix1Cols, matrix2Rows, matrix2Cols;
    
    printf("Enter the number of rows of matrix 1:");
    scanf("%d", &matrix1Rows);
    printf("Enter the number of columns of matrix :");
    scanf("%d", &matrix1Cols);
    printf("Enter the number of rows of matrix 2:");
    scanf("%d", &matrix2Rows);
    printf("Enter the number of columns of matrix 2:");
    scanf("%d", &matrix2Cols);
    
    float matrix1[matrix1Rows][matrix1Cols];
    float matrix2[matrix2Rows][matrix2Cols];
    float matrixResult[matrix1Rows][matrix1Cols];
    
    for(int i = 0; i < matrix1Rows; i++) {
        printf("Enter the members of matrix 1 row %d :", i + 1);
        
        for(int j = 0; j < matrix1Cols; j++) {
            scanf("%f", &matrix1[i][j]);
        }
    }
    
    for(int i = 0; i < matrix2Rows; i++) {
        printf("Enter the members of matrix 2 row %d :", i + 1);
        
        for(int j = 0; j < matrix2Cols; j++) {
            scanf("%f", &matrix2[i][j]);
        }
    }
    
    matrixResult[i][j] = 1;
    
    for(int i = 0;i < matrix1Rows; i++) {
        for(int j = 0; j < matrix2Cols; j++) {
            matrixResult[i][j] = 0;
            matrixResult[i][j] += matrix1[i][j] * matrix2[i][j];
        }
    }

    printf("The  of the matrix is\n:");
    
    for(int j = 0; j < matrix1Cols; j++) {
        for(int i = 0; i < matrix2Rows; i++) {
            printf("\t\t %.0f", matrix1[i][j]);
        }
        
        printf("\n");
    }
}

void matrixTranspose() {
    int matrixRows, matrixCols;
    
    printf("Enter the number of rows:");
    scanf("%d", &matrixRows);
    printf("Enter the number of columns:");
    scanf("%d", &matrixCols);
    
    float matrix[matrixRows][matrixCols];
    
    for(int i = 0; i < matrixRows; i++) {
        printf("Enter the members of row %d :", i + 1);
        
        for(int j = 0; j < matrixCols; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("The transpose of the matrix is\n:");
    for(int j = 0; j < matrixCols; j++) {
        for(int i = 0; i < matrixRows; i++) {
            printf("\t\t %.0f", matrix[i][j]);
        }
        
        printf("\n");
     }
}
