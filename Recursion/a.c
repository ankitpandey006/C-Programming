#include<stdio.h>
int fact(int x)
{
if(x == 0 || x == 1 )
return 1;
else 
{
    return (fact(x-1)*(x));
}

}
int main()
{
    int n;
    printf("Enter the number that you what to find factorial = ");
    scanf("%d",&n);
    printf("Factorial of given number %d is %d",n,fact(n));
    return 0;
}

