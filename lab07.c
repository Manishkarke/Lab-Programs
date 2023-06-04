// Write a program in C to handle bitwise operation
#include <stdio.h>

int main()
{
    int num1, num2, bAnd, bOr, bXor, bNot, lShift, rShift;
    printf("Enter two numbers");
    scanf("%d %d", &num1, &num2);
    bAnd = num1 & num2;
    bOr = num1 | num2;
    bXor = num1 ^ num2;
    bNot = ~num1;
    lShift = num1 << 2;
    rShift = num2 >> 2;
    printf("Bitwise Operation of\nXOR = %d, \nAND = %d, \nOR = %d, \nNOT = %d, \nLeft Shift = %d, \nRight Shift = %d", bXor, bAnd, bOr, bNot, lShift, rShift);
    return 0;
}