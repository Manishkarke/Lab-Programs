// Lab 5: WAP in C that reads a seconds and convert it into hours, minutes, seconds and print them.
#include <stdio.h>

int main()
{
    int initialSecond, second, minute, hour;

    printf("Please enter time in second: ");
    scanf("%d", &initialSecond);

    second = initialSecond;

    hour = second / 3600;
    second %= 3600;

    minute = second / 60;
    second %= 60;

    printf("%d seconds = %d hours %d minute %d seconds", initialSecond, hour, minute, second);

    return 0;
}