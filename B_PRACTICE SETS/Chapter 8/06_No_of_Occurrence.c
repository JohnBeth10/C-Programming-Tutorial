// Write a program to count the occurrence of a given character in a string.

#include<stdio.h>
#include<string.h>
int occurrence(char arr[], char alphabet){
    int count=0;
    for(int i=0; i<strlen(arr); i++){
        if( alphabet == arr[i]){
            count++;
        }
    }
    return count;
}
int main(){
    char str[] = "JohnBeth";
    char character;
    printf("Enter a alphabet to check whether it is in the array: ");
    scanf("%c",&character);

    printf("The no of times %c repeats in the array is: %d\n",character,occurrence(str,character));

}