// Write a C program to read two 3 * 3 matrix and find their product
#include <stdio.h>
#define ROW 3
#define COL 3

int matrixInput(int matrix[ROW][COL]);
int matrixProduct(int matrix1[ROW][COL], int matrix2[ROW][COL], int product[ROW][COL]);
int displayProduct(int product[ROW][COL]);

int main(){
    int firstMatrix[ROW][COL], secondMatrix[ROW][COL], product[ROW][COL];
    printf("Enter the elements for first Matrix\n");
    matrixInput(firstMatrix);

    printf("Enter the elements for Second Matrix\n");
    matrixInput(secondMatrix);

    matrixProduct(firstMatrix, secondMatrix, product);

    printf("Product of given two 3 * 3 matrix is \n");
    displayProduct(product);

    return 0;
}

int matrixInput(int matrix[ROW][COL]){
    for (int rowIndex = 0; rowIndex < ROW; rowIndex++){
        for (int colIndex = 0; colIndex < COL; colIndex++){
            printf("Element of row: %d col: %d : ", rowIndex + 1, colIndex + 1);
            scanf("%d", &matrix[rowIndex][colIndex]);
        }
    }
    return 0;
}

int matrixProduct(int matrix1[ROW][COL], int matrix2[ROW][COL], int product[ROW][COL]){
    for (int index = 0; index < ROW; index++){
        for (int j = 0; j < ROW; j++){
            int sum = 0;
            for (int k = 0; k < ROW; k++){
                sum += matrix1[j][k] * matrix2[k][j];
            }
            product[index][j] = sum;
        }
    }
    return 0;
}

int displayProduct(int product[ROW][COL]){
    for (int rowIndex = 0; rowIndex < ROW; rowIndex++){
        for (int colIndex = 0; colIndex < COL; colIndex++){
            printf("%d ", product[rowIndex][colIndex]);
        }
        printf("\n");
    }
    return 0;
}