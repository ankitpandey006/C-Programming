#include<stdio.h>
int  sum(int a , int b)
   {
      int c  =  a + b;
      return (c);
   }
int main()
{
    int a,b;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    int num = sum(a,b);
    printf("sum of two number is %d ",num);
    return 0;
}