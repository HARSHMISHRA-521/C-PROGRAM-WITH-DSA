#include<stdio.h>
int main () {
   char val;
   printf("Enter the character: \n");
   val = getc(stdin);
   printf("Character entered: ");
   putc(val, stdout);
   return(0);
}