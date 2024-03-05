/*write a program to accept n numbers from the user and find out the samllest number from an array*/
#include<stdio.h>
int main()
{
int n,i;
printf("\n enter n number = ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
 int smallest = a[0];
 for(i=1;i<n;i++)
 {
    if(a[i]<smallest)
    {
        smallest = a[i];
    }
 }
printf("\n the smallest number is %d",smallest);
    return 0;
}