#include <stdio.h>

int main()
{
    int num, is_prime = 1;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num <=0)
    {
        printf("0 and -ve numbers are not prime or composite");
        return 0;
    }
    else if (num == 1){
        printf("1 is neither prime nor composite\n");
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
    {
        printf("The number inputted by the user is prime\n\n");
    }
    else
    {
        printf("The number inputted by the user is not prime\n\n");
    }
    return 0;
}