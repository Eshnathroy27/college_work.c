// To find the year is leap year or not.
#include <stdio.h>
int main() {
    int year;
// take the input from the user.
    printf("Enter a year: ");
    scanf("%d", &year);
// condition to find the year is leap year or not,is - It is divisible by 4 and not divisible by 100, or It is divisible by 4 and not divisible by 100, or
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}