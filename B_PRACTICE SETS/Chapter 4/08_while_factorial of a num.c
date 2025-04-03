#include <stdio.h>

int main(){
    int n;
    long long int factorial = 1;

    printf("Enter n: ");
    scanf("%d",&n);

    int i =1;
    while(i<=n){
        factorial *=i;
        printf("%d",i);
        if(i<n){
            printf(" X ");
        }
        i++; // Incrementation has to be done at last. (if incrementation is done before if statement then, there won't be "X" between 9 and 10 as the if condition is already when i becomes 9)
        }
        printf(" = %lld\n",factorial);
    return 0;
}