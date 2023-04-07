#include<stdio.h>
int main(){
    char st[]=" ibsti!boe!tvoebsbn!Ibsti!jt!  ";
    char *p = st;
    while(*p!='\0'){
        *p=*p-1;
        p++;
    }
    printf("the decrypted string is %s",st);
    return 0;
}