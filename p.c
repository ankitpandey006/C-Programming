#include<stdio.h>
void main(){
int n,i,a[n];
printf("\n enter a number = ");
for(i=0,i<n;i++){
scanf("%d",&a[i]);
}
int smallest = a[0];
for(i = 0;i<n,i++)
{
    if(a[i]<smallest)
    {
        smallest = a[i];
    }
}
printf("\n samllest number is %d",smallest);
}