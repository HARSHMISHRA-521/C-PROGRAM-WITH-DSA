#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("file.txt","r");
    int a,b,c;
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("the integers are %d %d %d",a,b,c);
    return 0;

}