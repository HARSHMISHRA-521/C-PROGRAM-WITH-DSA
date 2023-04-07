#include<stdio.h>
int main(){
    char st[]="harsh and sundaram ";
    char *p = st;
    while(*p!='\0'){
        *p=*p+1;
        p++;
    }
    printf("the encrypted string is %s",st);
    return 0;
}