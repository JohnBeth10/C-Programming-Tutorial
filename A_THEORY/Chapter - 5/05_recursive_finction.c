#include <stdio.h>

int factorial(int n);

int factorial(int n)
{
    if(n == 1 || n==0){ //Base Conditon - to ensure that the recursion terminates
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int a;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &a);

    printf("The factorial of %d is %d\n", a,factorial(a));
    return 0;
}