/* 
   This program demonstrates how to pass pointers to a function in C.
   The function `sum()` takes two integer pointers as arguments.
   It modifies the first argument's value (changing it to 100) 
   and then returns the sum of the modified value and the second argument.
*/
#include <stdio.h>

int sum(int*,int*);

int sum(int* a,int* b){
    *a =100;
    return *a + *b;
}
int main(){
    int x=5,y=7;
    printf("The sum of two nos is: %d\n",sum(&x,&y));
    return 0;
}