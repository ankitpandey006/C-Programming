#include<stdio.h>
int main()
{
    int num1,num2;
    int sum=0;
    printf("Enter a first number = ");
    scanf("%d",&num1);
    printf("Enter the second number = ");
    scanf("%d",&num2);
    for(int i =num1; i<= num2; i++)
    {
       int  isprime = 1;
       for(int j = 2; j<=i/2; j++)
       {
        if(i%j==0)
        {
            isprime = 0;
        }
       }
      if(isprime==1)
      {
       sum += i;
      }
    }
printf("sum of prime number between %d and %d is %d ",num1,num2,sum);
return 0;
}