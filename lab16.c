/*****
 * Write a C program to print following pattern:

         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
 1 2 3 4 5 4 3 2 1

*/

#include <stdio.h>

int main()
{
    int row, col, index = 1, space;

    printf("How many row do you want?\n");
    scanf("%d", &row);

    for (index; index <= row; index++)
    {
        for(space = 1;space <= row - index; space++){
            printf("  ");
        }
        for(col = 1; col <= index; col++) {
            printf("%d ", col);
        }
        for(col = index - 1 ; col >= 1; col--) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}