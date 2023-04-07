#include <stdio.h>

int main()
{

    int n, i;
    int prime = 1;
    printf("***PROGRAM TO CHECK A NO IS PRIME OR NOT***\n\n");
    printf("enter the no.\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            prime +=1;

            
        }
    }
    if (prime == 3)
    {
        printf("the no.is  prime\n");
    }
    else if
    {
        printf("the no.is not prime\n");
    }
    
    else{
        printf("ni n c");
    }

    return 0;
}