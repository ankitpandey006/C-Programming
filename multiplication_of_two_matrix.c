// jwrite a program to input two matrix (3*3) and print its multiplication
#include <stdio.h>
int main()
{
    int x[3][3], y[3][3], z[3][3], i, j, k;
    int sum = 0;
    printf("\n enter a 1st matrix element = \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", x[i][j]);
        }
        printf("\n");
    }
    printf("\n enter a 2nd matrix element = \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &y[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", y[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            z[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    printf("\n multiplication of matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}
