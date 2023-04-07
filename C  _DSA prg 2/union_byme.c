#include<stdio.h>
int main(){
    int a[6],b[6],c[12],i,j,k=0;
    printf("enter the elements of the set A \n");
    for(i=0;i<6;i++){
        printf("enter the elemnets :\t");
        scanf("%d",&a[i]);
    }
    printf("enter the elements of the set B\n");
    for(j=0;j<6;j++){
        printf("eneter the elements : \t");
        scanf("%d",&b[j]);
    }
    for(i=0;i<6;i++){
       c[i]=a[i]; 
    }
    for(j=0;j<6;j++){
        c[6+j]=b[j];
    }
    printf("the union of the two sets are : \n");
    for(i=0;i<12;i++){
        k=0;
        for(j=i+1;j<6;j++)
        {
            if(c[i]==c[j]){
                k=1;
                break;
            }
        }
        if(k==0)
        {
            printf("%d\t",c[i]);
        }
    }
    return 0;

}