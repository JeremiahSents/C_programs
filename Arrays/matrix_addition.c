#include <stdio.h>
int main()
{
    int r, c;
    int a[r][c];
    int b[r][c];
    int sum[r][c];

    printf("Enter number of rows\n");
    scanf("%d\n", &r);
    printf("Enter number of columns\n");
    scanf("%d\n", &c);

    printf("\nEnter the elements of 1st matrix:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element a %d%d:", i + 1, j + 1);
        }
    }

    printf("\nEnter the elements of 2st matrix:\n");

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a %d%d:", i + 1, j + 1);
        }
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nsum of two matrix is :\n\n");
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; i < c; ++j)
        {
            printf("%d", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
    }

    return 0;
}