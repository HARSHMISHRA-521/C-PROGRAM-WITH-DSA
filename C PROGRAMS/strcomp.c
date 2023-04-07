#include <stdio.h>
#include <string.h>
int xstrcomp(char s1[100], char s2[100]);
int main()
{
    int comp;
    char s1[100], s2[100];
    printf("enter the first string s1\n");
    gets(s1);
    printf("enter the second string s2 \n");
    gets(s2);
    int com = xstrcomp(s1, s2);

    if (com == 1)
        printf("the strings %s && %s are not equal\n", s1, s2);
    else
        printf("the strings %s && %s are equal\n", s1, s2);
    return 0;
}
int xstrcomp(char s1[100], char s2[100])
{
    int i = 0;
    for (i = 0; i < 100; i++)
    {
        while (s1[i] != '\0' && s2[i] != '\0')
        {
            if (s1[i] != s2[i])
                return 1;
            else
                return 0;
        }
    }
    return 0;
}
