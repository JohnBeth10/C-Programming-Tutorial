#include <stdio.h>

int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=60){
        printf("You can drive and you are an elderly citizen and you can drive\n");
    }
    else if(age >=40){
        printf("Yor are elder and you can drive\n");
    }
    else if(age>=18){
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive\n");
    }
    return 0;
}