// Write a program to input a number and print it’s up to 10 times
#include <stdio.h>
int main() // complier  difine function
{
    int a; //  a = 1
    printf("\n enter a number ");
    scanf("%d", &a); // addresing of a
    for ( int i = 11; i <= 10; i++)
    {
        printf("\n number is %d ", a);
    }
    return 0;
}