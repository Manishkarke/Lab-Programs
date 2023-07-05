#include <stdio.h>

struct student
{
    int id;
    char name[20];
    float mark;
};

int main()
{
    struct student students[3], temp;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Enter student's id: ");
        scanf("%d", &students[i].id);
        printf("Enter student's name: ");
        scanf("%[^\n]", students[i].name);
        printf("Enter student's mark: ");
        scanf("%f", &students[i].mark);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (students[i].mark > students[j].mark)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("Data in Ascending order of Marks: \n");
    for (i = 0; i < 3; i++)
    {
        printf("x---------------------------------------------------x\n");
        printf("Sn. %d :\nStudent's id: %d\nStudent's name: %s\nStudent's Mark: %f\n", i + 1, students[i].id, students[i].name, students[i].mark);
        printf("x---------------------------------------------------x\n \n");
    }

    return 0;
}