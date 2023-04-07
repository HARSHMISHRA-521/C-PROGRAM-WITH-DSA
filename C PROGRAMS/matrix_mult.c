#include <stdio.h>
int main()
{
    int h, t, i, j, k, p, q, sum = 0;
    int mat1[10][10], mat2[10][10], result[10][10];
    printf("\n*****Matrix multiplication******\n\n");
    printf("Enter the row and column of the first matrix : \n");
    scanf("%d\n %d", &i, &j);
    printf("Enter the row and column of the second matrix : \n");
    scanf("%d\n %d", &p, &q);
    if (j != p)
    {
        printf(" Matrix multiplication is not possible ! \n");
         return 0;
    }
    printf("\nEnter the elements of the first matrix : \n");
    for (h = 0; h < i; h++)
    {
        for (t = 0; t < j; t++)
        { 
            scanf("%d", & mat1[h][t]);
            //  printf("\t");
        }
        // printf("\n");
    }
    printf("Enter the elements of the second matrix : \n");
    for (h = 0; h < p; h++)
    {
        for (t = 0; t < q; t++)
        {
            scanf("%d" ,&mat2[h][t]);
            //  printf("\t");
        }
        // printf("\n");
    }
    for (h = 0; h < i; h++)
    {
        for (t = 0; t < q; t++)
        {
            for (k = 0; k < j; k++)
            {
                sum += mat1[h][k] * mat2[k][t];
            }
            result[h][t] = sum;
            sum = 0;
        }
    }
    printf("the result is :\n");
    for (h = 0; h < i; h++)
    {
        for (t = 0; t < q; t++)
        {
            printf(" %d\t", result[h][t]);
        }
        printf("\n");
    }

    printf("\n*****************************************\n");
    return 0;

}