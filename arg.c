#include<stdio.h>
void arg(int x , int y){

int x = a;
a = b;
b = x;
}
int main(){
    int a,b;
    printf("\n enter the number = ");
    scanf("%d%d",&a,&b);
     arg(&a,&b);
    printf("\n %d",a);
    printf("\n  %d",b);
    return 0;
}

