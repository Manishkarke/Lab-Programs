// Write a program in c that read n numbers and find their sum using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, *numArray, sum = 0;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &count);
    numArray = (int *)malloc(count * sizeof(int));

    for (int i = 0; i < count; i++)
    {
        printf("Enter number: ");
        scanf("%d", numArray + i);

        sum += *(numArray + i);
    }
    printf("Sum = %d", sum);
    free(numArray);
    return 0;
}