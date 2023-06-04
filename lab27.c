// Write a Program in C to print odd numbers from 1 to 100 using function
#include <stdio.h>
void displayOddNumbers();

int main()
{
    displayOddNumbers();
    return 0;
}

void displayOddNumbers()
{
    int index = 1;
    for (index; index <= 100; index++)
    {
        if (index % 2 != 0){
            printf("%d \t", index);
        }
    }
}