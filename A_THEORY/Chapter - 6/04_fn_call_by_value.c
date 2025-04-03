#include <stdio.h>

int sum(int,int);

int sum(int a, int b){
    return a+b;

}

int main(){
    printf("The sum of 6 an 8 is %d\n",sum(6,8));
    return 0;
}