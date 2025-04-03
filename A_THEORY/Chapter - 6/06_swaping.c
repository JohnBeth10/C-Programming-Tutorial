#include <stdio.h>

void swap(int*,int*);

void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a =13, b=12;
    printf("The value of a = %d and value of b = %d\n",a,b);
    swap(&a,&b);
    printf("The values of a and b after swapping is a = %d and b = %d\n",a,b);
    return 0;
}