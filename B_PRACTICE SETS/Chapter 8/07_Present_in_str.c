// #Write a program to check whether a given character is present in a string or not.

#include<stdio.h>
#include<string.h>
void is_present(char arr[],  char character){
    int found;
    for (int i = 0; i < strlen(arr) ; i++)
    {
        if(arr[i] == character){
            found = 1;
            break;
        }
    }
    if(found){
        printf("%c is present\n",character);
    }
    else{
        printf("%c is not present\n",character);
    }
    
}
int main(){
    char str[] = "John Beth";
    char ch =  'j';
    is_present(str, ch);
}