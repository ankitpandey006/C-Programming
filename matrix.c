/* write a program to input 3*3 matrix and print sum of digonal element */
#include <stdio.h>
int main()
{
    int x[3][3], i, j;
    int sum = 0;
    printf("\n enter a  matrix:\n ");
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
            printf("%d \t", x[i][j]);
        }
        printf("\n");
    }
    // sum of digonal element
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j || i + j == 2)
            {
                sum = sum + x[i][j];
            }
        }
       
    }
     printf("sum of digonal element is %d", sum);
    return 0;
}