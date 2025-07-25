// Write your own version of strlen function from <string.h>

#include<stdio.h>
int strlenth(char a[]){
    int count=0;
    for(int i=0; a[i]!='\0';i++){
        count++;
        if(a[i] == ' ')
            count-=1;        
    }
    return count;
    }
int main(){
    char arr[]="John Beth";
    printf("The length of the array is: %d\n",strlenth(arr));
}