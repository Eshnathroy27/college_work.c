#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest, amount;
    int n, i;
    float compoundFactor = 1.0;
    // n is the number of times interest is compounded per year
    //  Input from user
    printf("Enter the principal amount (in Rupee): ");
    scanf("%f", &principal);

    printf("Enter the annual rate of interest (%%): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Simple Interest calculation
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest calculation (manual exponentiation)
    float r = rate / (100 * n);
    int totalPeriods = n * time;

    for (i = 0; i < totalPeriods; i++) {
        compoundFactor *= (1 + r);
    }

    amount = principal * compoundFactor;
    compoundInterest = amount - principal;

    //  Output results
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);
    printf("Total Amount after Compound Interest = %.2f\n", amount);

    return 0;
}