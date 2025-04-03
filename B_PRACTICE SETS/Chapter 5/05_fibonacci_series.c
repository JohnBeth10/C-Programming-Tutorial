int fibonacci_series(int);

int fibonacci_series(int num)
{

    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    return fibonacci_series(num - 1) + fibonacci_series(num - 2);
}


#include <stdio.h>

int main()
{
    int num;
    printf("Enter the value of n: ");
    scanf("%d", &num);

    printf("Fibonacci series: ");

    for (int i = 0; i < num ; i++)
    {
        printf("%d ", fibonacci_series(i));
    }
    printf("\n\n");
    return 0;
}