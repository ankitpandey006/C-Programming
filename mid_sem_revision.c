#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number = \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is greater than %d and %d \t",a,b,c);
    }
    else if(b>a&&b>c)
    {
        printf("%d is greater than %d%d\n",b,a,c);
    }
    else{
        printf("%d is smallest\n",c);
    }
return 0;
}