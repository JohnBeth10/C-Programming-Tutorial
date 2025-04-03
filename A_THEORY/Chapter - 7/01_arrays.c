#include <stdio.h>

int main(){
    int marks[90]; // Reserve spaces to store the values of 90 integers

    marks[1]=25;
    marks[2]=35;
    marks[3]=45;
    marks[88]=55;
    marks[89]=95; // We can go all the way upto 89 (0 to 89 => 90 spaces)

    printf("The marks of 1st student is %d\nThe marks of 2nd student is %d\nThe marks of 3rd student is %d\nThe marks of 88th student is %d\nThe marks of 89th student is %d\n",marks[1],marks[2],marks[3],marks[88],marks[89]);
    return 0;
}