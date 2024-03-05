#include<stdio.h>
int main()
{
    int fact,n;
    printf("enter a number\n");
    scanf("%d",&n);
for(fact = 1; n>1;n--)
{
    fact = fact*n;
}
printf("factorial is %d",fact);
    return 0;

}