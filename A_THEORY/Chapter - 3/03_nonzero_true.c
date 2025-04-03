#include <stdio.h>

int main(){
    if(1){
        printf("This if is executed\n");
    }
    if(2245){
        printf("This if is executed\n");
    }
    if(3.57){
        printf("This if is executed\n");
    }
     if('c'){
        printf("The character inside the if is executed\n");
    }
    if(0){  // 0 is considered as false and 1 is considered as true in c programming lang
        printf("This is not excecuted\n");
    }
    
    return 0;
}