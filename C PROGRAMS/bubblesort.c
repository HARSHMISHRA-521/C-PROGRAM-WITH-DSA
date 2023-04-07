#include<stdio.h>
int main(){
int arr[100],i,j,tempn,xchanges;
printf(“enter the no. of elements :” );
scanf(“%d”,&n);
for(i=0;i<n;i++)
{
printf(“enter elements %d :”, i+1);
scanf(“%d”,&arr[i]);
}
xchanges =0;
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
xchanges++;
}
}
for(i=0;i<n;i++)
printf(“%d”,&arr[j]);
printf(“\n total exchanges =%d”,xchanges);
return 0;
}

