// Using Recursive Function
 
 #include<stdio.h>
 int fact(int n)
 {
     if(n==0||n==1)
     {
         return 1;
    }     else
     return (n*fact(n-1));
 }
 int main()
 {
     int num;
     printf("Enter a number: ");
     scanf("%d",&num);
     printf("Factorial of %d is %d \n",num ,fact(num));
     return 0;
 }
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number= ");
//     scanf("%d", &n);
//     int fact = 1;
//     for ( int i = 1; i <= n; i++)
//     {

//         fact  =fact*i;
//     }
//     printf("factoral of %d is %d ", n, fact);
//     return 0;
// }