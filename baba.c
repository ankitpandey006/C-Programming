#include <stdio.h>

int main() {
    int x[3][3], i, j, sum = 0;

    printf("\nEnter a 3x3 matrix:\n");

    // Input matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // Print matrix
    printf("Entered matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d \t", x[i][j]);
        }
        printf("\n");
    }

    // Calculate sum of diagonal elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j || i + j == 2) {
                sum = sum + x[i][j];
            }
        }
    }

    // Print sum of diagonal elements
    printf("Sum of diagonal elements is %d", sum);

    return 0;
}
