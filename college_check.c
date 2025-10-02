#include<stdio.h>


int main(){
    int Number_1st,Number_2nd;
    printf("enter the value of the Number 1\n");
    scanf("%d",&Number_1st);
    printf("enter the value of the Number 2\n");
    scanf("%d",&Number_2nd);
    if (Number_1st==Number_2nd)
    {
        printf("Number 1st eual to Number 2nd\n");
    }
    else{
        printf("Number 1st is not equal to Number 2nd\n");
    }
    
    return 0;
}