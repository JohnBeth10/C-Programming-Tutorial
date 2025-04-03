/*Write a program having a variable ‘i’. 
Print the address of ‘i’. Pass this variable to a function and print its address.
Are these addresses same? Why?*/

#include <stdio.h>

void print_address(int*);

void print_address(int* print_address_of_this_variable){
    printf("The address of i when passed through the function is %p\n",print_address_of_this_variable);
}

int main(){
    int i =59;
    int* pI = &i;

    printf("The address of i is %p\n",pI);
    print_address(pI);
    return 0;
}