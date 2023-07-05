// Write a C program to find sum of digits of a number using function
#include<stdio.h>
int sumOfDigits(int);

int main() {
    int num, sum;
    printf("Enter any Number: ");
    scanf("%d", &num);

    sum = sumOfDigits(num);
    printf("Sum of Digits of %d is %d.", num, sum);
    return 0;
}
int sumOfDigits(int num) {
    int sum = 0, remainder;
    while (num != 0)
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    return sum;
}