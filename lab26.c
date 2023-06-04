// Write a C program to print prime numbers from 200 - 300 using function.
#include <stdio.h>
void displayPrimeNumbers();

int main() {
    displayPrimeNumbers();
    return 0;
}

void displayPrimeNumbers() {
    for(int i = 200; i <= 300; i++){
        int c = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                c++;
                if(c > 2){
                    break;
                } else if(c <= 2 && j == i) {
                    printf("%d \t", i);
                }
            }
        }
    }
}