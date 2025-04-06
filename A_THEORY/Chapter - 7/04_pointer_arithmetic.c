#include <stdio.h>

int main(){
    
    // POINTER ARITHMETIC USING INTEGER POINTER
    int num = 8;
    int* pNum = &num;

    printf("The address of num is %u\n",&num);
    printf("The address of num is %u\n",pNum);

    pNum++;
    printf("The value of pNum is %u\n\n",pNum);

    // POINTER ARITHMETIC USING INTEGER POINTER
    char character = 'R';
    char* pCharacter = &character;

    printf("The address of the character is %u\n",&character);
    printf("The address of the character is %u\n",pCharacter);

    pCharacter++;
    printf("The value of character is %u\n",pCharacter);
    return 0;
}