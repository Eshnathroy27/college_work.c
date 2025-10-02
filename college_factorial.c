#include<stdio.h>

int main(){
    int number_of_term;
    printf("Enter the number of terms: \n");
    scanf("%d", &number_of_term);
    int fact=1;
    for (int i = number_of_term; i>0; i--)
    {
        fact*=i;
    }
    printf("the factorial of the %d is %d",number_of_term,fact);
    
    return 0;
}