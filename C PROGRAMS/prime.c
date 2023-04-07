#include <stdio.h>

int main()
{

    int n, i;
    int prime = 1;
    printf("***PROGRAM TO CHECK A NO IS PRIME OR NOT***\n\n");
    printf("enter the no.\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            prime = 0;

            break;
        }
    }
    if (prime == 0)
    {
        printf("the no.is not prime\n");
    }
    else
    {
        printf("the no.is prime\n");
    }

    return 0;
}