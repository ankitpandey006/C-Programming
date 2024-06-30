#include <ankit.h>

int find_lcm(int a, int b, int c ){
    if(c % a == 0 && c % b == 0){
        return c;
    }
    return find_lcm(a, b, c+1);
}

int main() {
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1 > num2){
        lcm = find_lcm(num2, num1, num2);
    } else {
        lcm = find_lcm(num1, num2, num1);
    }

    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);
    
     return 0;
}