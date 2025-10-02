#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handle edge cases
    if (n == 0 || n == 1) {
        flag = 1;
    }

    // Loop to check for divisors from 2 to n/2
    for (i = 2; i < n ; ++i) {
        // If n is divisible by i, it's not prime
        if (n % i == 0) {
            flag = 1;
            break; // No need to check further
        }
    }

    // Display the result
    if (flag == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}