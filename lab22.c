// Write a C program to read a line and print the number of vowels
#include <stdio.h>
#define LENGTH 150

int main()
{
    char line[LENGTH];
    int noOfVowels = 0, index, len;

    printf("Enter a line: ");
    scanf("%[^\n]s", &line);

    while (line[len] != '\0')
    {
        len++;
    }

    // Logic for finding no of vowels
    for (index = 0; index <= len; index++)
    {
        if (line[index] == 'a' || line[index] == 'e' || line[index] == 'i' || line[index] == 'o' || line[index] == 'u' || line[index] == 'A' || line[index] == 'E' || line[index] == 'I' || line[index] == 'O' || line[index] == 'U'){
            noOfVowels++;
        }
    }

    printf("There are %d vowels in the line: \"%s\"", noOfVowels, line);

    return 0;
}