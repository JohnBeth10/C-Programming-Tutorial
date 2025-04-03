#include <stdio.h>

int main(){
    int num =72;
    int* pNum = &num; // j is a pointer pointing to i
    int k = 67;

    printf("The address of num is %p\n",&num);
    printf("The address of num is %p\n\n",pNum);

    printf("The address of num is %p\n\n",&pNum);

    printf("The address of num is %p\n\n",&k);

    printf("The value at address pNum is %d\n",*pNum);
    printf("The value at address pNum is %d\n",num);
    printf("The value at address pNum is %d\n",*(&num));
    return 0;
}