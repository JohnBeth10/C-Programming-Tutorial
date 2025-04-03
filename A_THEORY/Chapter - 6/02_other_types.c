#include <stdio.h>

int main(){
    char character ="A";
    char* pCharacter = &character;

    float decimal_num = 5.6789;
    float* pDecimal_num = &decimal_num;

    printf("The address of character is %p\n",&character);
    printf("The address of character is %p\n\n",pCharacter);

    printf("The address of decimal num is %p\n",&decimal_num);
    printf("The address of decimal num is %p\n",pDecimal_num);
    return 0;
}