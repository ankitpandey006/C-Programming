// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number of row ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j = 1; j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int n;
    printf("enter a no of row");
    scanf("%d",&n);
    int a = n;
    for(int i=1;i<=n;i++)
    {
        for(int j = 1; j<=a; j++)
        {
            printf("%d",j);
        }
        a--;
        printf("\n");
    }
}