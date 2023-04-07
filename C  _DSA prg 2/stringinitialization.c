#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char c1[20], c2[20], c;
    printf("enter the string by method 1\n");
    gets(c1);
    printf("enter the string by character by character \n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        c2[i] = c;
        i++;
    }
    c2[i - 1] = '\0';
    printf("the first string is %s\n", c1);
    printf("the second string is %s\n", c2);
    printf("strcmp of this strings return %d :", strcmp(c1, c2));
    return 0;
}