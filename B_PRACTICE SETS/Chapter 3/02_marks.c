// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.

#include <stdio.h>

int main(){
    float marks1, marks2, marks3;
    float percent;
    printf("Enter the marks of first subject out of 50: ");
    scanf("%f",&marks1);
    printf("Enter the marks of second subject out of 50: ");
    scanf("%f",&marks2);
    printf("Enter the marks of third subject out of 50: ");
    scanf("%f",&marks3);

    printf("Your marks are %f, %f, %f\n",marks1,marks2,marks3);

    percent = ((marks1+marks2+marks3)/150.0)*100.0;
    printf("You percentage is %f\n\n",percent);

    if( (marks1<=33 || marks2<=33 || marks3<=33) && percent<=40 ){
        printf("You FAILED due to both less marks in individual sujects and less percentage\n\n");
    }
    else if(marks1<=33 || marks2<=33 || marks3<=33){
        printf("You FAILED due to less marks in individual sujects\n\n");
    }
    
    else if(percent<=40){
        printf("You FAILED due to less percentage\n\n");
    }
    else{
        printf("You PASSED\n\n");
    }

    return 0;
}