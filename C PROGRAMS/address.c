#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++)
        printf("the value of address of arr[%d][%d] is %u:\n",i,j,&arr[i][j]);
    }
    return 0;
}