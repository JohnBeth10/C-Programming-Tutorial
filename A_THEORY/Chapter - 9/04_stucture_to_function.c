#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    int id;
    float salary;
}employee;

void show(employee e1){  // if typedef was not used then "show(employee e1)" becomes "show(struct employee e1)"
    printf("%d %s %.2f",e1.id,e1.name,e1.salary);
}

int main(){
    employee e1;
    e1.id = 1;
    strcpy(e1.name,"John");
    e1.salary = 1000000;
    show(e1);
      
}