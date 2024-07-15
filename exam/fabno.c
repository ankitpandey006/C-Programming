#include<stdio.h>
int fabno(int n)
{
     if(n==0)
     {
         return 0;
     }
     else if (n==1)
     {
         return 1;
     }
    
    return fabno(n-1) + fabno( n-2);
}
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    fabno(a);
    printf("fabno series of %d is %d ",a,fabno(a));
    return 0;
}