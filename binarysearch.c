// write a c program to search an element in the array using binary search
#include <stdio.h>
int main()
{
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int m, search, l = 0, r = 11;
    printf("\n enter a number a number that you want to search = ");
    scanf("%d", &search);
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] == search)
        {
            printf("\n number is found ");
            break;
        }
        else if (a[m] > search)
        {
            r = m - 1;
        }
        else if (a[m] < search)
        {
            l = m + 1;
        }
    }
    if (l > r)
    {
        printf("\n number is not found");
    }
    return 0;
}