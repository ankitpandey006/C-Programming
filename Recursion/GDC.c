#include<stdio.h>
int gdc(int x,int y)
{
    if(x==0)
    {
        return x;
    }
    else if(y==0)
    {
        return y;
    }
    else
    {
        return (y,y%x);
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int c = gdc(a,b);
    printf("GCD of %d and %d is %d",a,b,c);
    return 0;
}