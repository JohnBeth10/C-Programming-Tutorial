// 7. Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10).

#include <stdio.h>

int main(){
    int i,sum=0;
    for(i=1;i<=10;i++){
        sum += i*8;
        printf("After 8 X %d, the running sum = %d \n",i,sum);
    }
    printf("\n");
    printf("The total sum of the numbers occurring in the multiplication table of 8 = %d\n\n",sum);
    return 0;
}