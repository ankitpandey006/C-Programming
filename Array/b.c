#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    printf("Enter 10 integers: \n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(int i = 0; i < 10; i++) {
        sum += arr[i];
    }

  
    printf("The sum of the 10 elements is: %d\n", sum);

    return 0;
}
