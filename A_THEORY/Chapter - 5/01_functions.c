#include <stdio.h>

//Function Prototype
int sum(int x, int y); 

//Function Definition
int sum( int x, int y){
    // printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    
    int num_1,num_2;
    int sum_of_two_nos;

    printf("Enter first number: ");
    scanf("%d",&num_1);
    printf("Enter second number: ");
    scanf("%d",&num_2);
    
    
    sum_of_two_nos = sum(num_1,num_2); //Function call
    printf("The sum of %d and %d = %d\n",num_1,num_2,sum_of_two_nos);


    return 0;
}