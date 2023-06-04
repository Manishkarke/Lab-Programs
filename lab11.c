// Write a C program to print primes number from 1 to 100
#include <stdio.h>

int main()
{
    int out, in, count;
    for (out = 2; out <= 100; out++){
        count = 0;
        for (in = 1; in <= out; in++){
            if (out % in == 0){
                count++;
                if (count > 2) break;
                else if (count <= 2 && in == out) printf("%d ", out);
            }
        }
    }

    return 0;
}