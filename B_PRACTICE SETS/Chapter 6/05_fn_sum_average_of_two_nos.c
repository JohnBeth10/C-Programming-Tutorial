// write a program using a function which calculates the sum and average of two numbers
//Use pointers and print the value of sum and average of two numbers.

#include<stdio.h>

int* sum(int,int);

int* sum(int a,int b){
    int sum = a+b;
    int* pSum = & sum;
    printf("The sum is %d\n",sum);
    return pSum;
}

float* average(int,int);

float* average(int a,int b){
    float avg = (a+b)/2.0;
    float* pAvg = &avg;
    printf("The average is %f\n",avg);
    return pAvg;
}


int main(){
    int x = 56, y = 78;
    int* ptr1;
    float* ptr2;
    
    ptr1 = sum(x,y);
    ptr2 = average(x,y);
    printf("The address of sum is %u and that of average is %u",ptr1,ptr2);
    return 0;
}
