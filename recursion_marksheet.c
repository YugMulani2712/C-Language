#include <stdio.h>

int marks[3][3];
int total[3];
float percentage[3];

int calculateTotal(int student, int subject)
{
    if (subject == 0)
    {

        return marks[student][subject];
    }
    else
    {

        return marks[student][subject] + calculateTotal(student, subject - 1);
    }
}

void calculatePercentage(int student)
{
    total[student] = calculateTotal(student, 2);
    percentage[student] = total[student] / 3.0;
}

int main()
{

    printf("Enter marks for each student and subject:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Student %d, Subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        calculatePercentage(i);
    }

    printf("\nTotal and Percentage:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d: Total = %d, Percentage = %.2f%%\n", i + 1, total[i], percentage[i]);
    }

    return 0;
}