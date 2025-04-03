float force(float);

float force(float m){
    return m*9.8;
}

#include <stdio.h>

int main(){
    float mass = 50;
    printf("The force excerted on the body of mass %.2f by Earth's gravity is %.2f\n",mass, force(mass));
    return 0;
}