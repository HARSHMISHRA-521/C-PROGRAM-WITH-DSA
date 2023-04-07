// #include<stdio.h>
// void pointer(int *ptr,int *pt){
   
//     *ptr=12;
//     *pt=14;
//     printf("the value of ptr= %d and  pt = %d \n ",*ptr,*pt);
// }
// int main(){
//     int x, y;
//     int *p,*q;
//     x=5;
//     y=10;
//     p=100;
//     q=&y;
//     printf("the value of x is %d\n",x);
//     printf("the value of y is %d\n",y);
//      printf("the value of *p is %d\n",*p);
//     printf("the value of *q is %d\n",*q);
//     pointer(p,q);
//     printf("the value of *p is %d\n",*p);
//     printf("the value of *q is %d\n",*q);
//     printf("the value of x is %d\n",x);
//     printf("the value of y is %d\n",y);
//     return 0;
// }

#include<stdio.h>

void ptrfunc(int *ptr)
{
	*ptr=8;
}

int main()
{
	int x=5;
    int *ptr;
    ptr=&x;
    	printf("x=%d\n",x );
    printf("the value of ptr is %d\n",*ptr);
    ptrfunc(ptr);
    printf("the value of ptr is %d\n",*ptr);
	printf("x=%d\n",x );
	printf("&x is %u\n",&x);
	printf("x=%d",x );
	return 0;
}