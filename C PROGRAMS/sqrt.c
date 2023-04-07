#include<stdio.h>
#include<math.h>
int main (){
    int i,t;
    float n;
    float root;
     printf("enter the the no of tests to be passed\n");
    scanf("%d",&t);
  for(i=0;i<t;i++){
      printf("the no to be tested : \n");
      scanf("%f",&n);
      root = sqrt(n);
      printf("the no after testing is : %f\n",root);
  }
return 0;
  }