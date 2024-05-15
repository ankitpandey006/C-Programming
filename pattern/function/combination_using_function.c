// #include <stdio.h>
// int combination(int x)
// {
//     int fact = 1;
//     for (int i = 1; i <= x; i++)
//     {
//        fact*=i;
//     }
//     return fact;
// }
// int main()
// {
//     int n, r;
//     printf("\n Enter the value of n =");
//     scanf("%d", &n);
//     printf("\n Enter the value of r = ");
//     scanf("%d", &r);
//     combination(n);
//     combination(r);
//     combination(n - r);
//     int ncr = combination(n) / (combination(r) * combination(n - r));
//     printf("%d", ncr);
//     return 0;
// }
#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main()
{
    int n, r;
    printf("\n Enter the value of n = ");
    scanf("%d", &n);
   for(int i = 0; i<=n;i++)
   {
    for(int j=0;j<=n-i;j++)
    {
        printf(" ");
    }
    for(int j = 0;j<=i;j++)
    {
        int icj = combination(i,j);
        printf("%d ",icj);
    }
    printf("\n");
   }
    return 0;
}