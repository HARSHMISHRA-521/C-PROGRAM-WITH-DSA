#include<stdio.h>
int main(){
    int num,limit;
    printf("enter no. for which u wnat to calculate table\n\n");
    scanf("%d",&num);
    printf("enter the limit upto which u want to calculate the table\n");
    scanf("%d",&limit);
    int arr[limit];
    for(int i =0;i<limit;i++){
    arr[i]=num*(i+1);
    }
    for(int i=0;i<limit;i++){
        printf("the table of the number %d * %d = %d\n\n",num,i+1,arr[i]);
       
    }
     printf("**********");
    return 0;


}