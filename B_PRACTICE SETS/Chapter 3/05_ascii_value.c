// Write a program to determine whether a character entered by the user is
// lowercase or not.

#include <stdio.h>

int main(){

    char  alphabet;

    printf("Enter an alphabet: ");
    scanf("%c",&alphabet);

    printf("The ascii value of the character entered is %d\n",alphabet);

    if(alphabet>=97 && alphabet<=122 ){
        printf("It is a lowercase\n");
    }
    else{
        printf("It is not a lowercase\n");
    }
    return 0;
}