/***********
 * Write a C program in C to Read 10 numbers and Find the largest number
 */
#include <stdio.h>
#define length 10

int main()
{
    int numbers[length], largestNum;

    printf("Enter 10 numbers: ");

    for (int i = 0; i < length; i++)
    {

        scanf("%d", &numbers[i]);
    }
    largestNum = numbers[0];
    // Finding largest one
    for (int i = 1; i < length; i++)
    {
        if (numbers[i] > largestNum)
        {
            largestNum = numbers[i];
        }
    }

    printf("%d is the largest number.", largestNum);
    return 0;
}