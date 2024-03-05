// write a program to print traspose of matrix (oder 3*3)
#include <stdio.h>
int main()
{
    int a[3][3], trans[3][3], i, j;
    printf("\n enter 3*3 matrix =\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n matrix Element \n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            trans[j][i] = a[i][j];
        }
    }
    printf("\n tanspose of martrix \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}