#include<stdio.h>
int main()
{
    char n;
    printf("enter a size of triangle \n");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        int a=65;
        for(int j =1; j<=n; j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}