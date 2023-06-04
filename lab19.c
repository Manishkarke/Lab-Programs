// Write a C program to read two 3 * 3 matrix and find their sum
#include<stdio.h>
#define ROW 3
#define COL 3
int main() {
    int firstMatrix[ROW][COL], secondMatrix[ROW][COL], matrixSum[ROW][COL];
    // Taking Input from users
    printf("Enter the elements of first matrix: \n");
    for(int rowIndex = 0; rowIndex < ROW; rowIndex++){
        for(int colIndex = 0; colIndex < COL; colIndex++){
            printf("Element of row: %d col: %d : ", rowIndex + 1, colIndex + 1);
            scanf("%d", &firstMatrix[rowIndex][colIndex]);
        }
    }
    printf("Enter the elements of Second matrix: \n");
    for(int rowIndex = 0; rowIndex < ROW; rowIndex++){
        for(int colIndex = 0; colIndex < COL; colIndex++){
            printf("Element of row: %d col: %d : ", rowIndex + 1, colIndex + 1);
            scanf("%d", &secondMatrix[rowIndex][colIndex]);
        }
    }
    // Doing Calculations 
    for(int rowIndex = 0; rowIndex < ROW; rowIndex++){
        for(int colIndex = 0; colIndex < COL; colIndex++){
            matrixSum[rowIndex][colIndex] = firstMatrix[rowIndex][colIndex] + secondMatrix[rowIndex][colIndex];
        }
    }
    // Giving Output to user
    printf("Matrix sum of given matrixes is\n");
    for(int rowIndex = 0; rowIndex < ROW; rowIndex++){
        for(int colIndex = 0; colIndex < COL; colIndex++){
            printf("%d  ", matrixSum[rowIndex][colIndex]);
        }
        printf("\n");
    }
    return 0;
}