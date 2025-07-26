// Write a program to encrypt a string by adding 1 to the ascii value of its characters.

#include<stdio.h>
#include<string.h>
char* encrypt(char arr[]){
    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = arr[i] + 1;
    }
    return arr;
    
}
int main(){
    char stringg[] = "JohnBeth";
    printf("The encrypted code is %s",encrypt(stringg));
}