#include<stdio.h>
int main()
{
    int n;
    printf("enter a size of pattern \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j =1;j<=n;j++)
        {
            int a=n/2+1;
            if(i==a || j==a)
            {
                printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}