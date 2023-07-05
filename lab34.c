// Write a c program to write a line of text to file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer = fopen("/home/manishkarki/myFile.txt", "w");
    char character;
    if (filePointer == NULL)
    {
        printf("File is not opened.");
    }
    else
    {
        printf("File is opened successfully.\n");
        printf("Enter a line of text and hit \" ENTER \": ");
        while (1)
        {
            character = getchar();
            if (character == '\n')
                break;
            fputc(character, filePointer);
        }
        printf("Content written successfully.");
    }
    fclose(filePointer);
    return 0;
}