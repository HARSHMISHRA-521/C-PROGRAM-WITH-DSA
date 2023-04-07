#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int A[],int n){
    //int max=INT_MIN;     //we just wanna initialize the max with a no. both line 16 and 15 are valid
    int max=0;
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}
void countsort(int *A,int n){
    int i,j;
    //find the maximum elemnet in A
    int max=maximum(A,n);

    //create the count array
    int* count=(int *)malloc((max+1)*sizeof(int));

    //initialize the array elements to 0
     for(i=0;i<max+1;i++){
        count[i]=0;
    }
    //increment the coresponding index in the count array
    for(i=0;i<n;i++){
        count[A[i]]=count[A[i]]+1;
    }

    i=0;//counter for count array
    j=0;//counter for given array A

    while(i<=max){
        if(count[i]>0){
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
}

int main(){
    int A[]={1,1,3,5,4,2,9,100,100,200};
    int n=sizeof(A)/sizeof(int);
    printarray(A,n);
    countsort(A,n);
    printarray(A,n);
    return 0;
}