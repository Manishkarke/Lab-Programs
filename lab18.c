/******
 * Write a C program to read 10 numbers and sort them in ascending order(In Array)
 */
#include <stdio.h>
#define length 10

int main()
{
    int numbers[length], temp;

    // Taking numbers input
    printf("Enter 10 numbers: ");
    for (int index = 0; index < length; index++)
    {
        scanf("%d", &numbers[index]);
    }

    // Sorting Numbers in Ascending order
    for (int index = 0; index < length; index++){
        for(int j = index + 1; j < length; j++)
        if (numbers[index] > numbers[j]){
            temp = numbers[index];
            numbers[index] = numbers[j];
            numbers[j] = temp;
        }
    }

    for(int index = 0; index < length; index++) {
        printf("%d, ", numbers[index]);
    }

    return 0;
}