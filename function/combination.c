#include <stdio.h>
int main()
{
    int n, r;
    int nfact = 1;
    int rfact = 1;
    int nrfact = 1;
    printf("enter the value of n = \n");
    scanf("%d", &n);
    printf("ebter the value of r = \n");
    scanf("%d", &r);
    for (int i = 1; i <= nfact; i++)
    {
        nfact *= i;
    }
    for (int i = 1; i <= rfact; i++)
    {
        rfact *= i;
    }
    for (int i = 1; i <= (n - r); i++)
    {
        nrfact *= i;
    }
    int ncr = nfact / (rfact * nrfact);
    printf("the Combination of these number is %d", ncr);
    return 0;
}