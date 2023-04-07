#include<stdio.h>
int main(){
    FILE *ptr;
 ptr = fopen("demofile.txt","w");
putc('harsh',ptr);
 return 0;
}