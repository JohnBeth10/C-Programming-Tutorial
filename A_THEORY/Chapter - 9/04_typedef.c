#include<stdio.h>
#include<string.h>
typedef struct
{
    char name[30];
    int age;
    int roll_no;
}student;  //For using typedef the alias name should be given at the end.

int main(){
    student s1, s2; //Here, we could write "student s1,s2" instead of "struct student s1,s2".
    strcpy(s1.name,"john");
    s1.age=19;

    student*ptr;
    ptr = &s1;

    printf("%s %d\n",s1.name,s1.age);
    printf("copied using ptr %s %d\n",ptr->name,(*ptr).age);

}