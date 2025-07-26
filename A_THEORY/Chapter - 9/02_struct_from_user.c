#include<stdio.h>
struct student{
    int admn_no;
    char name[30];
    char course[10];
    int roll_no;
};
int main(){
    int std_num; 
    printf("Enter the no of students: ");
    scanf("%d",&std_num);

    struct student st[std_num];
    for (int i = 0; i < std_num; i++)
    {
        printf("Enter details of student %d:\n",i+1);
        
        printf("Admission no.: ");
        scanf("%d",&st[i].admn_no);

        printf("Name: ");
        getchar();
        fgets(st[i].name,30,stdin);
        
        printf("Course: ");
        fgets(st[i].course,10,stdin);

        printf("Roll no.: ");
        scanf("%d",&st[i].roll_no);

        printf("\n");
    }
    for(int i =0; i< std_num; i++){
        printf("Details of student %d\n",i+1);
        printf("%d\n%s%s%d\n\n",st[i].admn_no,st[i].name,st[i].course,st[i].roll_no);
    }
    
}