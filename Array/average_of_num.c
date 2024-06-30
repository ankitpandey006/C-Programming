#include<stdio.h>
int main()
{
    int a[10];
    int sum = 0;
    printf("Enter a number ");
    for(int i = 0; i< 10; i++)
    {
        scanf("%d",&a[i]);
    } 
    for(int i = 0; i< 10; i++)
     {
         sum += a[i];
     }
     float avg = sum/10;
     printf("%f",avg);
    return 0;
}