#include<stdio.h>
int main(){
    int i,j,n,c;
    int arr [n][c];
    printf("enter the no of rows\n");
    scanf("%d",&n);
    printf("enter the no of columns\n");
    scanf("%d",&c);
    for(i=0;i<n;i++){
        for(j=0;j<c;j++){
        printf("enter the values of %d th row and  %d th column is \n",i+1,j+1);
        scanf("arr[%d][%d]",&arr[i][j]);
        }   
    printf("\n");
    }
     for(i=0;i<n;i++){
        for(j=0;j<c;j++){
        printf(" the values of the the %d th row and %d column is arr[%d][%d]:\n",i+1,j+1,arr[i][j]);
        
        }
    
    
    printf("\n");

    }

}