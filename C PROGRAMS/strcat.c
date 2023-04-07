#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]="hello";
        char str2[20]= "harsh";
        {
   // strcat(str2,str1);
  
   int i=0,j=0;
   while(str1[i]!='\0'){
   i++;
   }
   for(j=0;str2[j]!='\0';j++,i++)
   {
       str1[i]=str2[j];
   }
        str1[i]='\0';
        }

   
    printf("the string is %s\n",str1);
   
    return 0;
}