// Write a C program to find reverse of a number using function?
#include <stdio.h>
int reverse(int);

int main()
{
    int num, reverseNumber;
    printf("Enter a number(not containing 0 as initial or last digit): ");
    scanf("%d", &num);
    reverseNumber = reverse(num);
    printf("Reverse of %d is %d", num, reverseNumber);
}

int reverse(int num)
{
    int rev = 0, remainder;
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    return rev;
}