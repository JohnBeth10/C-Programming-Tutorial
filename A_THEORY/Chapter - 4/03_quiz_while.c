/*Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.*/

#include <stdio.h>

int main(){
    int i = 10;
    while(i<=20){
        printf("The value of i is %d\n",i);
        i++;
    }
    return 0;
}

//               OR

// #include <stdio.h>

// int main(){
//     int i = 1;
//     while(i<=20){
//         if (i>=10){
//         printf("The value of i is %d\n",i);
//         }
//         i++;
//     }
//     return 0;
// }