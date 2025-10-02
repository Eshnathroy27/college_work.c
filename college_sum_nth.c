#include <stdio.h>

int main() {
    int number_of_term;
    printf("Enter the number of terms: \n");
    scanf("%d", &number_of_term);

    int sum = 0;

    if (number_of_term <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        for (int i = 1; i <= number_of_term; i++) {
            sum += i;
        }
        printf("The sum of the first %d terms is %d\n", number_of_term, sum);
    }

    return 0;
}