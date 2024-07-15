// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter week number");
//     scanf("%d",&n);
    
//     switch (n)
//     {
//     case 1:
//        printf("Mondey");
//         break;
//     case 2:
//        printf("Tuesday");
//         break;
//         case 3:
//        printf("Wednesday");
//         break;
//         case 4:
//        printf("Thurasday");
//         break;
//         case 5:
//        printf("Friday");
//         break;
//         case 6:
//        printf("Saturday");
//         break;
//         case 7:
//        printf("Sunday");
//         break;    
//     default:
//         break;
//     }
//    return 0;
// }

#include<stdio.h>
int main()
{
    int a ;
    printf("Enter first oprents");
    scanf("%d",&a);
    float ch;
     printf("Enter Opretor");
     scanf("%f",&ch);
     int c;
     printf("Enter Second oprends");
     scanf("%d",&c);
    switch (ch){
    case '+': 
              printf("Addition of Number is ", a + c);
        break;
        case '-': 
              printf("Substraction of Number is ", a - c);
        break;
        case '*': 
              printf("product of Number is ", a * c);
        break;
        case '/': 
              printf("Division of Number is ", a / c);
        break;

    default: printf("error Input");
        break;
    }
    return 0;
}