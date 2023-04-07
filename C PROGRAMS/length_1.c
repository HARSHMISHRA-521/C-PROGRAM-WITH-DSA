#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    //char *str;
    int c=0 ;
    printf("enter the string \n");
    gets(str);
    
    while(str[c] !='\0'){
        c++;
    }
    printf("the length of the string is :%d \n\n",c);
    int length = strlen(str);
    printf("the length of the string is :%d \n\n",length);

    
    return 0;
}