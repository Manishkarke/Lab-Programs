/****
 * Write a program to print the following pattern with no. of rows defined by user

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

*/
#include <stdio.h>
#define pi 10

int main()
{
    int row, col, index = 1, space;
    printf("How many rows do you want?\n");
    scanf("%d", &row);

    for (index; index <= row; index++)
    {
        for (space = 1; space <= row - index; space++)
        {
            printf("  ");
        }
        for (col = index; col >= 1; col--)
        {
            printf("* ");
        }
        for (col = 2; col <= index; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}