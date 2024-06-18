#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
        fact *= i;
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
    printf("\nEnter the value of n = ");
    scanf("%d", &n);
    for (int r = 0; r <= n; r++)
    {
        for (int j = 0; j <= n - r; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= r; j++)
        {
            int icj = combination(n, r);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
}
