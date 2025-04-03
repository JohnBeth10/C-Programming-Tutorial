#include <stdio.h>

int main(){
    int num = 6;
    int* pNum = &num;
    int** pPNum = &pNum;

    printf("The value of num is %d\n",num);
    printf("The value of num is %d\n",*pNum);
    printf("The value of num is %d\n\n",**pPNum);

    printf("The value of num is %d\n",*(&num));
    printf("The value of num is %d\n\n",**(&pNum));

    printf("The value of num is %d\n\n",***(&pPNum));

    return 0;
}