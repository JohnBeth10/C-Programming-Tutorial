/*Create an array of 10 numbers. 
Verify using pointer arithmetic that (ptr+2) points to the third element 
where ptr is a pointer pointing to the first element of the array. */

#include <stdio.h>

int main(){
    int array[]={12,24,36,48,60,72,84,96,108,120};
    int* ptr = array; // Same as int* ptr = &array[0]
    printf("The value at address %u is %d\n",ptr+2,*(ptr+2));
    printf("The third element of the array is %d\n",array[2]);

    return 0;
}
