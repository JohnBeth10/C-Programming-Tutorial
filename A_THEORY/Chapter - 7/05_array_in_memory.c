#include <stdio.h>

int main(){
    int marks[5];

    printf("Enter the marks of 5 subjects: \n");

    for(int i=0; i<5; i++){
        scanf("%d",&marks[i]);
    }

    for (int j=0; j<5; j++){
        printf("The address of marks at index %d is %u\n",j,&marks[j]);
    }
    return 0;
}