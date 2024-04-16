// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter number of row");
//         scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }



#include<stdio.h>
int main()
{
    int n,a;
    printf("enter a number of row  ");
    scanf("%d",&n);
      a = n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=a; j++)
        {
            printf("*");
        }
        a--;
        printf("\n");
        
    }
    return 0;
    
}