#include <stdio.h>

              // Break
              
int main(){
    for (int i =0; i<=15; i++){
        if (i==5){
        break; // Break : Exit the loop now
        }
        printf("i is %d\n",i);
    }
    return 0;
}

              // Continue

  int main(){
    for (int i =0; i<=15; i++){
        if (i==5){
        continue; // skip this iteration now
        }
        printf("i is %d\n",i);
    }
    return 0;
}