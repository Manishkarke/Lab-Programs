// WAP to read content of file
#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *filePointer = fopen("/home/manishkarki/myFile.txt", "r");
    char character;

    if(filePointer == NULL) {
        printf("File is not opened.");
    } else {
        printf("File is opened successfully.\n");
        printf("Reading file..... \n");
        while (1)
        {
            character = fgetc(filePointer);
            if(character == EOF)
            break;
            printf("%c", character);
        }
        
    }
    fclose(filePointer);
    return 0;
}