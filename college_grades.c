// To calculte the Percentage,Marks,Grade.
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
    // now calculating the Marks and Percentage
    int Percentage,Marks;
    Marks=Maths+EVS+PPS+EE+Physics;
    Percentage=(Marks/5);
    printf("you got %d Marks out of 500\nAnd got  %d%% Percentage\n",Marks,Percentage);
    // if the percetage got between the 90-100 the the grade will be 'A'.
    // if the percetage got between the 80-90 the the grade will be 'B'.
    // if the percetage got between the 60-80 the the grade will be 'C'.
    // if the percetage got between the 0-60 the the grade will be 'D'.
    if (Percentage >= 90 && Percentage <= 100) {
        printf("Grade: A\n");
    } else if (Percentage >= 80 && Percentage < 90) {
        printf("Grade: B\n");
    } else if (Percentage >= 60 && Percentage < 80) {
        printf("Grade: C\n");
    } else if (Percentage < 60 && Percentage >= 0) {
        printf("Grade: D\n");
    } else {
        printf("Invalid percentage entered.\n");
    }
    return 0;
}