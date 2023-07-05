// Write a C program to read a line of a text
#include <stdio.h>

int main()
{
    char line[100], ch;
    int i = 0;
    printf("Enter a line of text: ");
    while (1)
    {
        ch = getchar();
        if (ch == '\n')
            break;
        line[i] = ch;
        i++;
    }
    line[i] = '\0';

    printf("Your line of Text is: %s", line);
    return 0;
}