#include <stdio.h>

int main() {
    int choice;

    // Display the menu to the user
    printf("Choose a conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform the conversion based on the user's choice
    if (choice == 1) {
        // Binary to Decimal conversion
        long binary_num;
        printf("Enter a binary number: ");
        scanf("%ld", &binary_num);

        int decimal_num = 0;
        int base = 1;

        while (binary_num > 0) {
            int last_digit = binary_num % 10;
            decimal_num += last_digit * base;
            binary_num /= 10;
            base *= 2;
        }
        printf("Decimal equivalent: %d\n", decimal_num);
    } 
    else if (choice == 2) {
        // Decimal to Binary conversion
        int decimal_num;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal_num);

        long binary_num = 0;
        int remainder;
        long i = 1;

        while (decimal_num != 0) {
            remainder = decimal_num % 2;
            binary_num += remainder * i;
            decimal_num /= 2;
            i *= 10;
        }
        printf("Binary equivalent: %ld\n", binary_num);
    } 
    else {
        // Handle invalid choice
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}