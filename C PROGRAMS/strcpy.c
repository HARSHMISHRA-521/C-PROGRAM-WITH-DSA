#include<stdio.h>
#include<string.h>
int main(){
    char str1[45]="harsh";
    char str2[45]="mishra";
    for(int i =0;i< 45;i++)
    str2[i]=str1[i];

   // strcpy(str2,str1);
    printf("the value of str2 is %s\n",str2);
    return 0;
}