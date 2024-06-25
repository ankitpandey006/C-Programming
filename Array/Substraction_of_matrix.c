#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("Enter the element of the 1st matrix\n");
    for(int i = 1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i = 1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element of the 2nd matrix\n");
    for(int i = 1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(int i = 1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("Substract of two matrix is \n");
    for(int i = 1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
     for(int i = 1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}