#include<stdio.h>
void main()
{
    for(int i =1; i<=4;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=8-i)
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}