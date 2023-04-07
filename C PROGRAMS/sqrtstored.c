#include<stdio.h>
#include<math.h>
int main (){
    int i,t;
    float n;
    float root[500];
     printf("enter the the no of tests to be passed\n");
    scanf("%d",&t);
     printf("the no to be tested : \n");
  for(i=0;i<t;i++){
     
      scanf("%f",&n);
      root[i] = sqrt(n);
      //printf("the no after testing is : %f\n",root);
  }
  printf ("the roots are : \n");
  for(i=0;i<t;i++){
      printf( "%f \n",root[i]);
  }
return 0;
  }