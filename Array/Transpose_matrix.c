#include <stdio.h>
int main()
{
    int a[3][3],b[3][3];
    printf("Enter a matrix element");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)                    
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of the matrix is \n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[j][i]=a[i][j];

        }
    }
  for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}