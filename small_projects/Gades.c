#include <stdio.h>
#include <string.h>

#define count 5

int get_students()
{
    int n = 0;
    scanf("%d", &n);
    return n;
}

void error_handling(double mark)
{
    if (mark > 100 || mark < 0)
    {
        printf("Invalid mark entered!!!\n");
    }
};

double get_mean(double marks[], int subjects)
{
    double sum = 0.0;
    for (int i = 0; i < subjects; i++)
    {
        sum += marks[i];
    }
    return sum / subjects;
};
char get_grade(double mean)
{
    if (mean >= 85)
    {
        return 'A';
    }
    else if (mean >= 70)
    {
        return 'B';
    }
    else if (mean >= 60)
    {
        return 'C';
    }
    else if (mean >= 50)
    {
        return 'D';
    }
    else if (mean >= 40)
    {
        return 'E';
    }
    else if (mean >= 30)
    {
        return 'F';
    }
    else
    {
        return 'X';
    }
}
int main()
{
    int students;
    printf("Enter how many students whose grades you want to enter:");
    students = get_students();

    printf("\nYou have entered %d students\n\n", students);
    double mark;
    char *subjects[count] = {"Maths", "Swahili", "English", "Geography", "Biology"};
    double marks[count];

    

    for (int i = 0; i < students; i++)
    {
        printf("Enter marks for student %d\n\n", i + 1);

        for (int j = 0; j < count; j++)
        {

            printf("Enter the marks for %s:", subjects[j]);
            scanf("%lf", &mark);

            error_handling(mark);
            while (mark > 100 || mark < 0)
            {
                printf("Please re-enter marks for %s :", subjects[j]);
                scanf("%lf", &mark);
                error_handling(mark);
            }
            marks[j] = mark;
        }
        double mean = get_mean(marks, count);
        char grade = get_grade(mean);
        printf("\n\nStudent %d\n\n",i+1);
        printf("Mean:%.2lf\n\n",mean);
        printf("Grade:%c\n\n",grade);
    }
    return 0;
}

