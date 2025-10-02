#include <stdio.h>

int main()
{
    int n, a, b, sum = 0;
    printf("enter the value of n\n");
    scanf("%d", &n);
    a = 0;
    b = 1;
    if (n == 1)
    {
        printf("0");
    }
    else if (n == 2)
    {
        printf("1");
    }

    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d", sum);
        if (i < n)
        {
            printf(",");
        }
    }
    printf("\n");
    printf("the nth term of the fibonacci series is the %d", sum);

    return 0;
}