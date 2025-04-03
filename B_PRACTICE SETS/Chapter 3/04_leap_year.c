// Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.

#include <stdio.h>

int main(){
    int leap_year,year;
    printf("Enter Year: ");
    scanf("%d",&year);

    if (year%4==0 && year%100!=0 || year%400==0){
        printf("It is a leap year\n");
    }
    else{
        printf("It is not a leap year\n");
    }
    return 0;
}