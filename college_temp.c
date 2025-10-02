// convert the temperature from degree centigrade to fahrenhiet
#include<stdio.h>

int main(){
    float temperature;
    printf("Enter the temperature(in degree centigrade)\n");
    scanf("%f",&temperature);
    float c;
    // if c denote the temperature in the celcius.
    c=temperature;
    float f;
    // if f denote the temperature in the fehrenhiet.
    f=(c*(1.8))+32;
    printf("the temperature in the fahrenhiet is %.2fF",f);
    return 0;
}