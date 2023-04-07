#include<stdio.h>

void table(int *arr,int num,int limit){
printf("the table of no %d is:\n",num);
for(int i = 0;i<limit;i++){
arr[i]=num*(i+1);
}
for(int i = 0;i<limit;i++){
printf("%d*%d=%d\n",num,i+1,arr[i]);
}
printf("********************************\n\n");
}

int main(){
    int arr[3][10];
    table(arr[0],2,10);
    table(arr[1],7,10);
    table(arr[2],9,10);

    return 0;
                    

}
