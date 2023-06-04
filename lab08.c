// Lab 3: WAP in C that reads a three digit number and find its sum of digits.
#include <stdio.h>

int main()
{
    int number, sum;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    sum = number / 100;
    number %= 100;

    sum += number / 10;
    number %= 10;

    sum += number;

    printf("%d", sum);
    return 0;
}