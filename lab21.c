// Write a C program to check if the given word is palindrome or not
// Palindrome is a word which is same no matter from where we read last or first
#include <stdio.h>
#define length 20

int main()
{
    char word[length];
    int len, index, bool = 0;

    printf("Enter a word: ");
    scanf("%s", &word);

    while (word[len] != '\0')
        len++;
    for (index = 0; index < len; index++)
    {
        if (word[index] != word[len - index - 1])
        {
            bool = 1;
            break;
        }
    }
    if (!bool)
    {
        printf("%s is palindrone string.", word);
    }
    else
    {
        printf("%s is not palindrone string.", word);
    }
    return 0;
}