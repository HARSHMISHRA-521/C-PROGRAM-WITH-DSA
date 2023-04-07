#include<stdio.h>
int main(){
    FILE *ptr1;
    FILE *ptr2;
    
    ptr1=fopen("conten.txt","r");
    ptr2=fopen("copy.txt","w");
   char c=fgetc(ptr1);
   char d=fgetc(ptr1);
    while(c!=EOF){
        fputc(c,ptr2);
        fputc(c,ptr2);
        c=fgetc(ptr1);
    }
    while(d!=EOF){
        fputc(d,ptr2);
        fputc(d,ptr2);
        c=fgetc(ptr1);
    }
    printf("content copied succesfully");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
