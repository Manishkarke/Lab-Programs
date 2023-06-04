// Write a C program to read a line and count the number of words in it.
#include <stdio.h>

#define length 150

int main() {
    char line[length];
    int len = 0, word = 0, index;

    printf("Enter a Line: ");
    scanf("%[^\n]s", &line);
    while (line[len] != '\0'){
        len++;
    }
    

    for(index = 0; index < len; index++){
        if(line[index] == ' ' && line[index + 1] != ' ') {
            word++;
        }
    }

    printf("Word length: %d",word + 1);
    return 0;
}