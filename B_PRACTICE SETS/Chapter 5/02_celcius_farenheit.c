float celcius_farenheit(float);

float celcius_farenheit(float c){
    return ((9.0/5.0)*c)+32; // 9.0 and 5.0 ensure floating-point division; using 9 and 5 would cause integer division, making 9/5 evaluate to 1 instead of 1.8.
}

#include <stdio.h>

int main(){
    float temp;

    printf("Enter the temperature in degree celcius: ");
    scanf("%f",&temp);

    printf("%.2f degree celcius is %.2f farenheit\n",temp, celcius_farenheit(temp));
    
    return 0;
}