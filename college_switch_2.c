#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Get the operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Get the operands from the user
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Use a switch statement to perform the operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
}