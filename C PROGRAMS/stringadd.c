#include <stdio.h>
int main()
{
  char str[] = "Harsh";
  char *ptr = str;
  printf("The address is:\n");
  while (*ptr != '\0')
  {
    printf("%c :", *ptr);
    printf("%u  \n", *ptr);

    ptr++;
  }
  return 0;
}