#include <stdio.h>
#include <math.h>

// Calculating factorial of positive integers
int factorial() {
    int n;
    int result = 1; // Initialize result to 1

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    } else if (n == 0 || n == 1) {
        printf("The factorial of %d is 1\n", n);
        return 1;
    } else {
        int i;
        for (i = 2; i <= n; i++) {
            result *= i; // Multiply result by i in each iteration
        }
        printf("The factorial of %d is %d\n", n, result);
        return result;
    }
}

int main() {
    factorial();

    return 0;
}

