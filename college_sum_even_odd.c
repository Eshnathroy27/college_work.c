#include<stdio.h>

int main(){
    int number_of_term;
    printf("Enter the number of terms: \n");
    scanf("%d", &number_of_term);
    // sum1=sum of all the even number.
    int sum1=0;
    // sum2=sum of all the odd number.
    int sum2=0;
    for (int i = 1; i <= number_of_term; i++)
    {
        if (i%2==0)
        {
            sum1+=i;
        }
        else{
            sum2+=i;
        }
        
    }
    printf("the sum of the all even number is %d\n sum all the odd number is %d",sum1,sum2);
    
    
    return 0;
}