// armstrong number between 1 to 100.
#include <stdio.h>

int main() {
    int num, temp, digit, sum, count, i;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for (num = 1; num <= 100; num++) {
        temp = num;
        count = 0;

        // Count digits
        int temp2 = temp;
        while (temp2 != 0) {
            count++;
            temp2 /= 10;
        }

        temp = num;
        sum = 0;

        // Calculate sum of digits raised to the power of count manually
        while (temp != 0) {
            digit = temp % 10;
            int power = 1;
            for (i = 0; i < count; i++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}