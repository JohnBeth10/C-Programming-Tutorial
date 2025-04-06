#include <stdio.h>

int main(){
    int marks[]={45,57,90,86,98};

    //int* pMarks = marks;
    int* pMarks = &marks[0]; //This is same as int* pMarks = marks;

    for(int i = 0 ; i<5 ; i++){
    printf("The marks at index %d is %d\n",i,marks[i]);
    printf("The marks at index %d is %d\n",i,*pMarks);
    pMarks++;
    }
    return 0;
}