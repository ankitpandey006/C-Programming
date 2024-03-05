/*write a c program to make a simple calculetor (+,-,*,/,%) opretor using switch case */
#include<stdio.h>
int main()
{
    int a,b;
    char n;
    printf("\n enter a opretors  ");
    scanf(" %c" ,&n);
    printf("\n enter two number = ");
    scanf("%d%d",&a,&b);
    switch (n)
    {
    case '+': printf("\n %d + %d = %d",a,b,a+b);
        break;
    case '-': printf("\n %d - %d = %d", a,b,a-b);
        break;
    case '*': printf("\n %d*%d = %d",a,b,a*b);
        break;
    case '/': if(b!=0)
            printf("\n %d/%d = %d",a,b,a/b);
            else 
            printf("\n it is not divisible");  
        break;
    case '%' :
          if(b!=0)  
         printf("\n %d %% %d",a,b,a%b); 
         else
         printf("\n Cannot perform modulo with divisor 0 ");  
         break;            
    default: printf("\n you entered wrong choice");
        break;
    }
    return 0;
}
