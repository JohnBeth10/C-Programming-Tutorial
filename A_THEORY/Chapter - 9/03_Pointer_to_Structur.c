#include<stdio.h>
#include<string.h>

struct day_care{
    char baby_name[10];
    int admn_no;
};
int main(){
    struct day_care AdamOG = {"Adam",10}; 
    struct day_care *AdamCPY;
    AdamCPY = &AdamOG;

    printf("The original name is %s and the copied name using ptr is %s\n",AdamOG.baby_name,AdamCPY->baby_name);
    //  (*AdamCPY).baby_name) is the same as AdamCPY->baby_name
}
 