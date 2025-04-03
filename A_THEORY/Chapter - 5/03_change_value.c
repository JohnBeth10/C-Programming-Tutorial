#include <stdio.h>

int change(int a);

int change(int a){
    a = 77;  // Here the copy of b will be changed from 22 to 77, but the original b remains the same (Refer pg- 30 of handbook)
    printf("The copy of b excecuted through the change() is %d\n",a);
    return 0;
}

int main(){

    int b = 22;
    change(b);
    printf("The actual value of b is %d\n",b); // Here the actual value of b is printed which has not been changed.
    
    return 0;
}