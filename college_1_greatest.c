// swape assignment college
#include<stdio.h>
int main(){
    // To take the three Numbers from the user.
    int Number_1st,Number_2nd,Number_3rd;
    printf("enter the value of the Number 1st\n");
    scanf("%d",&Number_1st);
    printf("enter the value of the Number 2nd\n");
    scanf("%d",&Number_2nd);
    printf("enter the value of the Number 3rd\n");
    scanf("%d",&Number_3rd);
    //  compare the three with each other.
    if (Number_1st>Number_2nd&&Number_1st>Number_3rd)
    {
        printf("Number 1st is the greatest number \n");
    }
    else if (Number_2nd>Number_1st&&Number_2nd>Number_3rd)
    {
        printf("Number 2nd is the greatest number \n");
    }else if (Number_3rd>Number_2nd&&Number_3rd>Number_1st)
    {
        printf("Number 3rd is the greatest number \n");
    }
    return 0;
}