#include<stdio.h>
#include<stdio.h>
int main()
{
    char str[100];
    printf("enter a string = ");
    gets(str);
    int size=0;
    int z= 0;
    while (str[z]!='\0')
    {
        size++;
        z++;
    }
    printf("size Of String is %d \n",size);
    for (int  i = 0,j = size-i; i<=j; i++,j--)
    {
       char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reverse String is = %s",str);
    return 0;
}