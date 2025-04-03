// Quick Quiz: Use the library function to calculate the area of a square with side a.

#include <stdio.h>
#include<math.h>

int main(){
    int side;
    float area;
    printf("Enter side: ");
    scanf("%d",&side);

    area = pow(side,2);
    printf("The area of the square is %f",area);

    
    return 0;
}
