/****
 * Write a C program to print following pattern.
 * User can define how many row to print

   *
   * * *
   * * * * *
   * * * * * * *
   * * * * * * * *
*/
#include <stdio.h>

int main() {
    int row, col, index = 1;

    printf("How many no. of rows do you want to print?\n");
    scanf("%d", &row);

    for(index; index <=  row; index++) {
        for(col = 1; col <= 2*index - 1; col++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}