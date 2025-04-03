/*Write a program to print the address of a variable.
Use this address to get the value of the variable.*/

#include <stdio.h>

int main(){
    int value_of_variable = 45;
    int* pValue_of_variable = & value_of_variable;

    printf("The address of the variable is %p\n",&value_of_variable);
    printf("The address of the variable is %p\n",pValue_of_variable);

    printf("The value at address of the variable is %d\n",value_of_variable);
    printf("The value at address of the variable is %d\n",*pValue_of_variable);
    return 0;
}