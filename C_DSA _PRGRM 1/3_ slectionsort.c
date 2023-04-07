#include<stdio.h>
int main(){
    int i ,n, j,slect,swap,arr[500];
      printf("enter the no of terms of array\n");
    scanf("%d", &n);
    printf("enter the elements of the array\n");
    for (i = 0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("the array before sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
    for(i=0;i<n;i++){
    slect = i;
    }
    for(j=i+1;j<n;j++){
    if(arr[j]<arr[slect]){
        swap=arr[slect];
        arr[slect]=arr[j];
        arr[j]=swap;
    }
    }
       printf("the array after sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}