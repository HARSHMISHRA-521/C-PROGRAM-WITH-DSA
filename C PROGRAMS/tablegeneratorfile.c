#include<stdio.h>
int main(){
FILE *ptr;
int num;
int i;
ptr=fopen("tablegenerator.txt","w");
printf("enter the number for table : \n");
scanf("%d",&num);
fprintf(ptr,"The table of %d is created\n",num);
for (int i=0;i<10;i++){

fprintf(ptr,"%d * %d = %d\n",num,i+1,num*(i+1));
}
printf("the table of %d is succesfully created\n",num);
fclose(ptr);
return 0;
}