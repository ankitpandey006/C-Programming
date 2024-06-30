// #include <stdio.h>
// int isprime(int n)
// {
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//         else
//         {
//             return 1;
//         }
//     }
// }
// int main()
// {
//     int num1, num2;
//     int sum = 0;
//     printf("enter the first number");
//     scanf("%d", &num1);
//     printf("enter the second number");
//     scanf("%d", &num2);
//      printf("the prime number between %d and %d are \n", num1, num2);
//     for (int i = num1; i <= num2; i++)
//     {
//         if (isprime(i))
//         {
//             printf("%d\t", i);
//         }
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int num1,num2;
    int sum = 0;
    printf("enter the first number = ");
    scanf("%d",&num1);
    printf("Enter the second number ");
    scanf("%d",&num2);
    for(int i = num1; i <= num2;i++)
    {
        int isprime = 1;
        for(int j = 2; j <= i/2; j++)
        {
            if(i%j==0)
            {
                isprime = 0;
                break;
            }
        }
      if(isprime)
      {
        sum = sum + i;
      }
    }
   printf("sum of prime number between %d and %d is %d",num1,num2,sum);
   return 0;
}