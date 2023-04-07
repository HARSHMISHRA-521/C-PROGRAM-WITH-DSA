#include<stdio.h>
int main(){
    int *ptr,arr[10];
    ptr = arr;
    if((ptr + 2) == &arr[2])
    printf("the pointer is verified\n");
    else{
        printf("the pointer is not verified \n");
    }
    return 0;
}