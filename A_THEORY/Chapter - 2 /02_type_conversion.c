#include <stdio.h>

int main(){
    int a = 9;
    int b = 2;
    float c = a/b; // The answer will be 4.000 instead of 4.5 as operation with two integers is an integers so  the ans becomes 4.
    printf("The value of a/b is %f\n",c);

    // To get the ans as 4.5 take any one value as a float (a or b).
    int d = 9;
    float e = 2;
    float f = d/e;
    printf("The value of d/f is %f\n",f);
    
    return 0;
}