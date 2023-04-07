#include <stdio.h>
int main()
{
  char str[50];
  printf("******Enter the string*******\n\n");
  for(int i=0;i<50;i++){
  gets(str);
  char *ptr = str;
  printf("The address is:\n");
  puts(str  );
  printf("*****\n");
  while (*ptr != '\0')
  {
    printf("%c :", *ptr);
    printf("%u  \n", *ptr);

    ptr++;
  }
  }
  return 0;
}