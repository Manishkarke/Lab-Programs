// Write a C program to read a number and find it's factorial
#include <stdio.h>

int main() {
    int num, index, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(index = 1; index <= num; index++){
        factorial *= index;
    }

    printf("Factorial of %d is %d", num, factorial);

    return 0;
}