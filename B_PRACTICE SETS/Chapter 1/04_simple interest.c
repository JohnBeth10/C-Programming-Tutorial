#include <stdio.h>

int main(){
    int p;
    float n,r,si;

    printf("Enter the principle amount: ");
    scanf("%d",&p);

    printf("Enter the no of years: ");
    scanf("%f",&n);

    printf("Enter the rate of interest: ");
    scanf("%f",&r);

    si = (p*n*r)/100;

    printf("Simple interest from the given dats is %f\n",si);
    
    return 0;
}