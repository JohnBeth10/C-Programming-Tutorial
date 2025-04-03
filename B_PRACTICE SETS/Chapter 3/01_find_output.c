#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");

    return 0;
}
// the output of this program is I am 11, as here = is used instead of == also 11 is a non zero no. so, the condition becomes true.