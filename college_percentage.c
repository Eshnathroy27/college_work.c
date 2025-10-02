// Accept the marks of five subjects and then calculate the marks percentage.
#include<stdio.h>

int main(){
    int Maths,Physics,PPS,EVS,EE;
    printf("enter the maks of Maths\n");
    scanf("%d",&Maths);
    printf("enter the maks of Physics\n");
    scanf("%d",&Physics);
    printf("enter the maks of PPS\n");
    scanf("%d",&PPS);
    printf("enter the maks of EE\n");
    scanf("%d",&EE);
    printf("enter the maks of EVS\n");
    scanf("%d",&EVS);
    // for calculate the Marks and Percentage
    int Percentage,Marks;
    Marks=Maths+EVS+PPS+EE+Physics;
    Percentage=(Marks/5);
    printf("you got %d Marks out of 500\nAnd got  %d%% Percentage\n",Marks,Percentage);
    return 0;
}