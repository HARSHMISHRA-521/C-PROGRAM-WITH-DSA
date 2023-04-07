#include <stdio.h>

int main()
{
    int factorial=1;
    int  i, n;
    printf("***ENTER THE THE NO FOR FACTORIAL***\n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        factorial *= i;
    printf("\n\n");
    printf("the factorial of the no is %d;\n", factorial);
}