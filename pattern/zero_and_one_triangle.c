
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a size of pattren");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             if(i==j)
//             printf("1");
//             else if(i-j==1)
//             printf("0");
//             else if(i-j==n-i-j+1)
//             printf("1");
//             else if(i-j==3)
//             printf("0");
//             else printf("1");
//         }
//         printf("\n");
//     }
//     return 0;
// }
  

/*another method*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter size of pattren \n");
    scanf("%d",&n);
    for(int i =1; i<=n;i++)
    {
        for(int j =1; j<=i; j++)
        {
            if((i+j)%2==0)
            {
                printf("1 ");
            }
            else
            {
              printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}