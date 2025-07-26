#include<stdio.h>
#include<string.h>

struct student_details{
    int admn_no;
    int std;
    int roll_no;
    char name[50];
};

int main(){
    struct student_details st1, st2, st3;
    st1.admn_no = 4141;
    strcpy(st1.name,"John Bethlehem");
    st1.std = 12;
    st1.roll_no = 31;

    printf("The details of student 1 are\n%d \n%s \n%d \n%d\n",st1.admn_no,st1.name,st1.std,st1.roll_no);
}