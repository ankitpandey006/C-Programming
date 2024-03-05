// write a program in c to perform the swapping of number using cell by refrence
#include<stdio.h>
void swap(int *a , int *b)
{
int n = *a;
*a = *b;
*b = n;
printf("\n inside swap function a = %d , b = %d ",a,b);
}
int main()
{
    int x,y;
    printf("\n enter a number = ");
    scanf("%d",&x);
    printf("\n enter a number = ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("\n after swaping : x = %d , y = %d",x,y);
    return 0;
}