#include <stdio.h>

void change_to_30_times(int*);
void change_to_30_times(int* placeholder_value){
    *placeholder_value = *placeholder_value * 30;
    printf("30 times of the entered value is %d\n",*placeholder_value);
}
int main(){
   int value_to_be_changed;
   printf("Enter the value to be changed: ");
   scanf("%d",&value_to_be_changed);
   
   int* pValue_to_be_changed = &value_to_be_changed;
   change_to_30_times(pValue_to_be_changed);
    return 0;