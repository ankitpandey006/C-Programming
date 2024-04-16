#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("enter size of pattren");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = a+2;
        }
        printf("\n");
    }
    return 0;
}