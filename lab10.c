// write a program to read a number and test if it is prime number or not

#include <stdio.h>
int main()
{
    int num, count = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        if (num % i == 0)
        {
            count = count + 1;
            if (count > 2)
            {
                printf("%d is Composite number", num);
                break;
            }
            else if (count <= 2 && i == num)
            {
                printf("%d is prime", num);
            }
        }
    }
    return 0;
}