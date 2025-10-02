// to calculate the area and circumference of the cirlce by radius. 
#include<stdio.h>

int main(){
    // take the input from the user
    int radius;
    printf("Enter the Radius(in meter)\n");
    scanf("%d",&radius);
    int area;
    // formula to calculate the area of circle is 3.14*radius*radius.
    area=3.14*radius*radius;
    printf("the area of the circle is %dm^2\n",area);
    int circumference;
    // formula to calculate the circumference of circle is 3.14*radius*2.
    circumference=3.14*radius*2;
    printf("the circumference of the circle is %d m^2",circumference);
    return 0;
}