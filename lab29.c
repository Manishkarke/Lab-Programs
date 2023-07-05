// Write a Program in C to swap two numbers using function.
#include <stdio.h>
void swapNum(int, int);

int main()
{
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);
    swapNum(num1, num2);
    return 0;
}
void swapNum(int a, int b)
{
    printf("Initially :\n num1 = %d\n num2 = %d\n", a, b);
    a += b;
    b = a - b;
    a = a - b;
    printf("after swapping: \n num1 = %d\n num2 = %d", a, b);
}