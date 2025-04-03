/* Write a program to find grade of a student given his marks based on below:
    90 – 100 => A
    80 – 90 => B
    70 – 80 => C
    60 – 70 => D
    50 – 60 => E
    <50=> F*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 90 && marks <= 100)
    {
        printf("A Grade");
    }
    if (marks > 80 && marks <= 90)
    {
        printf("A Grade");
    }
    if (marks > 70 && marks <= 80)
    {
        printf("A Grade");
    }
    if (marks > 60 && marks <= 70)
    {
        printf("A Grade");
    }
    if (marks > 50 && marks <= 60)
    {
        printf("A Grade");
    }
    else
    {
        printf("FAILED");
    }
    return 0;
}