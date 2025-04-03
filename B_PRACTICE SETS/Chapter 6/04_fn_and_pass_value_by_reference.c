// write a function and pass the value by reference

#include<stdio.h>

int fn_to_pass_value(int*);

int fn_to_pass_value(int* a){
    printf("The value of the variable is %d\n",*a);
}

int main(){
    int value = 8;
    int* pValue = & value;
    fn_to_pass_value(pValue);
return 0;
}
