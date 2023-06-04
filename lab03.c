// Lab 3: WAP in C that reads a number and print if it is odd or even
#include<stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n%2 == 0) 
    {
        printf("%d is a even number.", n);
    } else {
        printf("%d is a odd number.", n);
    }
    
}