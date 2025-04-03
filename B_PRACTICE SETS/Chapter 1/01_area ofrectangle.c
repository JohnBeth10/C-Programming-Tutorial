#include <stdio.h>

int main(){
    int len,bre,area;
    
    printf("Enter Length: ");
    scanf("%d",&len);

    printf("Enter Breadth: ");
    scanf("%d",&bre);

    area=len*bre;
    printf("The area of the rectangle is %d\n",area);
    return 0;
}