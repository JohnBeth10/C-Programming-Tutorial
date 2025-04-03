float average(float a,float b, float c);

float average(float a,float b, float c){
    return (a+b+c)/3;
}

#include <stdio.h>
float num1,num2,num3;

int main(){
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    printf("Enter the third number: ");
    scanf("%f",&num3);

    printf("The average of %.f, %.f and %.f is %.f",num1,num2,num3,average(num1,num2,num3));
    return 0;
}