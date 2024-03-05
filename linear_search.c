#include <stdio.h>
int main()
{
    int n,search,k,i;
    printf("enter a range \n");
    scanf("%d",&n);
    int a[n];
    printf("enter a 10 number = \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf(" enter a number that you want to search ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            printf("number is found\n");
            k++;
            break;
        }
        if (k == 0)
        {
            printf("number is not found");
        }
    }

    return 0;
}