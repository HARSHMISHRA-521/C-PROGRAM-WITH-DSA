/* Calculation of Simple Interest*/
#include <stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("enter the value\n");
    scanf("%d %d %f %f", &p, &t, &r, &si);

    /* Formula for calculating simple interest*/
    si = p*r*t/100;

    printf("%f\n", si);
    return 0;

}