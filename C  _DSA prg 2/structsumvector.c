#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} v;
v sumvector(v v1, v v2)
{
    v result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    v v1, v2, sum;
    v1.x = 500;
    v1.y = 500;
    printf("the dim of the vector of x is %d and y is %d\n", v1.x, v1.y);

    v2.x = 500;
    v2.y = 500;
    printf("the dim of the vector of x is %d and y is %d\n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("the sum of the vector is :\n x: %d \n y: %d", sum.x, sum.y);
    return 0;
}