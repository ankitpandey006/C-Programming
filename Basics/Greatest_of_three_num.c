#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("\n %d is Greater than %d and %d",a , b, c);
    }
    else if(b>a && b>c)
    {
        printf("\n %d is greater than %d and %d",b,a,c);
    }
    else
    {
        printf("\n %d is greater than %d and %d",c,a,b);
    }
    return 0;
}