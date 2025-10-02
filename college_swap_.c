//for the swape  two value of the two number.
#include<stdio.h>
int main(){
    // if we swap the value of the of variable 1st and 2nd.
    int variable_1st,variable_2nd;
    printf("enter the value of the variable_1st\n");
    scanf("%d",&variable_1st);
    printf("enter the value of the varible_2nd\n");
    scanf("%d",&variable_2nd);
    // now we take the a imaginary variable for the swap the value.
    int imaginary_variable;
    imaginary_variable=variable_1st;
    variable_1st=variable_2nd;
    variable_2nd=imaginary_variable;
    printf("enter the value of the variable_1st is %d\n",variable_1st);
    printf("enter the value of the variable_2nd is %d\n",variable_2nd);
    return 0;
}