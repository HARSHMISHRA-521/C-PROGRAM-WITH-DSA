#include <stdio.h>
#include <string.h>

int stringmatch(char string[50], char pattern[20], char replace[30], char output[50])
{
    int i, j, c, m, found, k;
    i = j = c = m = found = 0;
    while (string[c] != '\0')
    {
        if (string[m] == pattern[i])
        {
            i++;
            m++;
            if (pattern[i] == '\0')
            {
                found = 1;
                for (k = 0; replace[k] != '\0'; k++, j++)
                {
                    output[j] = replace[k];
                    i = 0;
                    c = m;
                }   
            }
        }
        else
        {
            output[j] = string[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
    }
    output[j] = '\0';
    return found;
}

void main()
{
    char string[50], pattern[20], replace[30], output[50];
    int found;
    printf("ENTER THE MAIN STRING \n");
    gets(string);
    printf("ENTER THE PATTERN STRING \n");
    gets(pattern);
    printf("ENTER THE REPLACEMENT STRING \n");
    gets(replace);
    found=stringmatch(string,pattern,replace,output);

    if(found)
    {
        printf("PATTERN FOUND \n");
        printf("THE STRING AFTER REPLACEMENT IS : \n  %s  \n", output);
    }
    else{
    printf("The pattern not found \n");
    }
}