// Write a C program to read a number and find it's factorial using function.
#include<stdio.h>
int factorial(int);

int main(){
    int fact, number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    fact = factorial(number);
    printf("Factorial of %d is %d.", number, fact);
    return 0;
}

int factorial(int num){
    int fact = 1, index;
    for(index = 1; index <= num; index++){
        fact *= index;
    }
    return fact;
}