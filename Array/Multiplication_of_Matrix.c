#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3]; 
    int sum = 0;
     printf("Enter the Element of 1st Matrix ");
     for(int i = 0; i < 3;i++)
     {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
     for(int i = 0; i < 3;i++)
     {
        for(int j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
     }
     printf("Enter the Element of 2nd Matrix ");
     for(int i = 0; i < 3;i++)
     {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
     }
     for(int i = 0; i < 3;i++)
     {
        for(int j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
     }
    return ;
}