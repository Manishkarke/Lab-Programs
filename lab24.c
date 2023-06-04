// Write a C program to read a line and find its length without using string handling function.
#include<stdio.h>
#define LENGTH 200

int main() {
    // Declaring variables to store string and no of letters.
    char line[LENGTH];
    int len = 0;

    // Reading User's Input 
    printf("Enter a Line: ");
    scanf("%[^\n]s", &line);

    // Logic for counting no of characters.
    while (line[len] != '\0')
    {
        len++;
    }

    // Giving output to user.
    printf("There are %d characters in the line: \"%s\"", len, line);
    return 0; 
    
}