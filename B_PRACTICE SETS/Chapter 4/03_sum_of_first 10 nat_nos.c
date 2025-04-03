// 5. Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
int main(){
    int count = 1;
    int sum = 0;
    while(count<=10){
    sum += count;
    printf("%d\n",sum);
    count++;
    }
    printf("The sum of first 10 natural numbers = %d\n",sum); // To get only the final answer.
   
    return 0;
}