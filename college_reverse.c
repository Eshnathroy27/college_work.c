#include <stdio.h>

int main() {
    int number, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;           // Get the last digit
        reverse = reverse * 10 + digit; // Build the reversed number
        number /= 10;                  // Remove the last digit
    }

    printf("Reversed number is: %d\n", reverse);

    return 0;
}