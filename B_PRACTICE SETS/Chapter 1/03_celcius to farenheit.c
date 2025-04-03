#include <stdio.h>

int main(){
    float c,f;

    printf("Enter temp in celcius: ");
    scanf("%f",&c);

    f = ((9.0/5.0)*c)+32;

    printf("Temp converted into Fahrenheit is: %f\n",f);

    return 0;
} 