#include<stdio.h>
int fact(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    return n*fact(n-1);
}
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    fact(a);
    printf("factorial of %d is %d ",a,fact(a));
    return 0;
}