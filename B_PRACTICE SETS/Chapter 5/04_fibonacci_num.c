//Write a program using recursion to calculate nth element of Fibonacci series.
int fibonacci(int);
// 0 1 1 2 3 5 8 13 21 34
int fibonacci(int num){
    if (num == 1 || num == 2 ){
        return num-1;
    }
    return fibonacci(num-2)+fibonacci(num-1);
}

#include <stdio.h>

int main(){
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    printf("The %dth element of fibonacci series is %d\n",number,fibonacci(number));
    
    return 0;
}