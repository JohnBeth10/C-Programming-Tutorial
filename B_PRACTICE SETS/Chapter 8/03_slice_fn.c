// Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include<stdio.h>
char* slice(char arr[], int st, int sp){
    char* start = &arr[st];
    char* stop = &arr[sp];

    arr = start;
    arr[sp] = '\0';
    return arr;
}
int main(){
    char str[] = "John Bethlehem Pallan";
    int start,stop;
    printf("Enter the starting index: ");
    scanf("%d",&start);
    printf("Enter the stopping index: ");
    scanf("%d",&stop);

    printf("The string you needed: %s\n",slice(str,start,stop));
}