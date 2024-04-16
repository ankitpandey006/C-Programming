#include <stdio.h>
int main()
{
    int r,c;
    printf("enter a row  \n");
    scanf("%d", &r);
    printf("enter a column\n");
    scanf("%d",&c);
    for (int i = 1; i <=r; i++)
      {
        for(int j = 1; j<=c;j++ )
        {
             printf("* \t");
        }
        printf("\n");
      }

            return 0;
}