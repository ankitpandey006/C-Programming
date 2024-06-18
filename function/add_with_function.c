#include<stdio.h>
int sumnum(int x,int y, int z)
{
     int d = x+y+z;
     printf("sum is %d",d);
     return (d);
}
int main()
{
    int a,b,c;
    printf("Enter three Number = \n");
    scanf("%d%d%d",&a,&b,&c);
    int d = a+b+c;
    sumnum(a,b,c);
    return 0;
}