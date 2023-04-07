#include<stdio.h>
// int x=10;
int fun(int *a){
    *a=5+*a;
    
    //  printf("%d\n",a);
    return *a;
}
int main (){
    int x=10;

    printf("%d\n",x);
    fun(&x);
     printf("%d\n",x);
    x+=5;
    printf("%d\n",x);
}