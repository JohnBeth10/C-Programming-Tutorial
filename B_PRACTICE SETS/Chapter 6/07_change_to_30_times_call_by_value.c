// Write a program to change the value of a variable to 30 times of its current
// value using call by value and verify that it does not change the value of
// the said variable.

#include <stdio.h>

int change_by_30_times(int);
int change_by_30_times(int a){
    a = a*30;
    return a;
}
int main(){
    int value_to_changed = 68;
    printf("The existing value is %d\n",value_to_changed);
    change_by_30_times(value_to_changed);
    printf("The new value is %d\n",value_to_changed); // The new value will be exactly similar to the existing value as it is function call by value.
    return 0;
}