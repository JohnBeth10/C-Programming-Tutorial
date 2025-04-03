//Write a recursive function to calculate the sum of first ‘n’ natural numbers.

int sum(int);

int sum(int num){
    if (num == 1){
        return 1;
    }
    return num + sum(num-1);
}

#include <stdio.h>

int main(){
    int num = 5;
    printf("The sum of first %d natural nos is %d\n",num,sum(num));
    return 0;
}