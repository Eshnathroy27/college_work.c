// To check the Number is the even or not
#include <stdio.h>

int main()
{
    int Number;
    printf("enter teh value of the Number\n");
    scanf("%d", &Number);
    if (Number % 2 == 0)
    {
        printf("the number is the even\n");
    }
    else
    {
        printf("the number is the odd\n");
    }

    return 0;
}