#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a 1st oprents = \n");
    scanf("%d", &a);
    char n;
    printf("enter a opretor\n ");
    scanf(" %c", &n);
    printf("enter a 2nd opreter = \n");
    scanf("%d", &b);
    switch (n)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d  = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d  = %d", a, b, a / b);
        break;
    default:
        printf("you enter a wrong choice");
        break;
    }
    return 0;
}