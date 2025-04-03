#include <stdio.h>

int main(){
    int n, i, factorial = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&n);
    for (i = 1; i<=n; i++) {
        factorial *= i;
        printf("%d",i);

        if(i<n){
            printf(" X ");
        }
    }

    printf(" = %d\n",factorial);
    return 0;
}