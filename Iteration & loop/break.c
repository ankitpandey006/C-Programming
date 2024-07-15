#include<stdio.h>
int main()
{
    for(int i = 0;i< 100;i++)
    {
        if(i==20)
        {
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}