#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, root1, root2, rpart, ipart, disc;
printf("Enter the 3 coefficients:\n”);
scanf("%f%f%f", &a, &b, &c);
if((a*b*c) = = 0)
{
        printf("Roots cannot be Determined:\n");
        exit(0);
}
disc = (b*b) - (4*a*c);
if(disc = = 0)
{
        printf("Roots are equal\n");
        root1 = root2 = -b / (2 * a);
        printf("root1=root2=%f", root1);
}
else if(disc>0)
{printf("Roots are real and distinct\n");
root1= (-b + sqrt(disc)) / (2*a);
root2= (-b - sqrt(disc)) / (2*a);
printf ("root1 = %f \n root2 = %f\n", root1, root2);
}
else

{
        printf("Roots are complex\n");
        rpart = -b / (2 * a);
        ipart = (sqrt(-disc)) / (2 * a);
        printf("root1 = %f + i %f \n", rpart, ipart);
    printf("root2 = %f - i %f \n", rpart, ipart);
}
