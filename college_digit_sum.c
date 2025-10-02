#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Make sure we handle negative numbers too
    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;   // Get the last digit
        sum += digit;          // Add it to the sum
        number /= 10;          // Remove the last digit

    }

    printf("Sum of the digits is: %d\n", sum);

    return 0;
}