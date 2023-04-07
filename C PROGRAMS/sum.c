#include <stdio.h>

int main()
{
    int n;
    float n1, n2;
    printf("pls enter your choise : 1-for sum \n & 2 for-for multiplication \n ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("to calculate the sum pls enter the numbers \n");

        scanf("%f ", &n1);
        scanf("%f", &n2);
        printf("the sum is %f \n", n1 + n2);
    }
    if (n == 2)
    {
        printf("input the no. \n");
        scanf("%f", &n1);
        scanf("%f", &n2);
        printf("the multiplication of the no is %f \n ", n1 * n2);
        printf("than you ");
    }
}