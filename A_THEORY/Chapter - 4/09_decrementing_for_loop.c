// Printing natural numbers in reverse order.

#include <stdio.h>

int main(){
    
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i = n; i; i--){ // i will excecute until it becomes 0, only 0 is false in c.
        printf("%d\n",i);
    }
    return 0;
}
