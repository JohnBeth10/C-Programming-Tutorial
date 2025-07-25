// Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include<stdio.h>
int main(){
    char c_str[5];

    printf("Enter a string: ");
    for (int i = 0; i < 4; i++)
    {
        scanf(" %c",&c_str[i]);
    }
    c_str[4] ='\0';
    
    printf("s string: %s\n",c_str);

}