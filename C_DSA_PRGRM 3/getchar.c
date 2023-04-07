#include <stdio.h>
int main() {
   char val;
   printf("Enter the character : \n");
   val = getchar();
   
   printf("*");
   printf("Entered character : %2c", val);
   return 0;
}