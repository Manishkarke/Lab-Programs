// Lab 6: WAP in C that reads four numbers and print out the largest one.
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, m1, m2, m;

    printf("Enter any four numbers (Seperate numbers with a space): ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    m1 = (num1 > num2) ? num1 : num2;
    m2 = (num3 > num4) ? num3 : num4;

    m = (m1 > m2) ? m1 : m2;

    printf("largest number is %d", m);

    return 0;
}