//1. Write a program to print multiplication table of a given number n.

#include <stdio.h>

int main(){
    int n,prod;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i = 1; i<=10 ; i++){
        prod = i*n;
        printf("%d x %d = %d\n",i,n,prod);
    }
    return 0;
}