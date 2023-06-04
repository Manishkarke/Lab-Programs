// Write a C program to print multiplication from 1 to 20
#include <stdio.h>

int main() {
    int i, j;

for(i = 1; i <= 20; i++) {
    for(j = 1; j <= 10; j++) {
        printf("%d * %d = %d \n", i, j, i*j);
    }
    printf("\v\v");
}
return 0;
}