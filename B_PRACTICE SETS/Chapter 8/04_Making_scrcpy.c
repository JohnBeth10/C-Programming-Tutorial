// Write your own version of strcpy function from <string.h>

#include<stdio.h>
void strcopy(char arr_to_cpy[],char cpy_to_arr[]){
    int count;
    for (int i = 0; arr_to_cpy[i] != '\0'; i++)
    {
        count++;
    }

    for(int i =0; i<count; i++){
        cpy_to_arr[i] = arr_to_cpy[i];
    }

    printf("Main atring = %s\n Copied string = %s\n",arr_to_cpy,cpy_to_arr);
}
int main(){
    char arr_to_copy[] = "johnbeth";
    char copy_to[10];
    strcopy(arr_to_copy,copy_to);

}