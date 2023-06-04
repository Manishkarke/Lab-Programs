// Write a C program to find sum of numbers from 1 to 100
#include <stdio.h>

int main() {
    int index = 1, sum = 0;
    for(index; index <=100; index++) {
        sum += index;
    }

    printf("Sum of numbers from 1 to 100 = %d", sum);
    return 0;
}