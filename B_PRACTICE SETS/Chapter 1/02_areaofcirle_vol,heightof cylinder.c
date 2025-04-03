#include <stdio.h>

int main(){
    int r,h;
    double volume,area;

    printf("Enter radius: ");
    scanf("%d",&r);
    printf("Enter height: ");
    scanf("%d",&h);

    volume = 3.13*r*r*h;

    printf("Volume of a cylinder with radius %d and height %d is %f\n", r,h,volume);

    area = 3.13*r*r;

    printf("Area of the base circle is %d\n",area);
    return 0;
}

