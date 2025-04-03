// Write a program to print the value of a variable i by using “pointer to pointer” type
// of variable.

#include <stdio.h>

int main(){
    int i = 89;
    int* pI = &i;
    int** pPI = &pI;
    
    printf("The value of i using pointer to pointer variable is %d\n",**pPI);
    printf("The value of i using pointer variable is %d\n",*pI);
    return 0;
}