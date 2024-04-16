#include<stdio.h>
int main()
{
int n;
printf("enter size of triangle \n");
scanf("%d",&n);
for (int  i = 1; i <= n; i++)
{
    int a=65;
    for ( int j = 1; j <= i; j++)
    {
        if(i%2!=0)
        {
            printf("%d",j);
        }
        else
        {
            printf("%c",a);
             a++;
        }
        
    }
    printf("\n");
}
return 0;
}