#include <stdio.h>
int main()
{
    printf("\t***********The bubblesorting program************\t\n");
    int i, j, swap, num[500], n;{
    printf("enter the no of terms of array\n");
    scanf("%d", &n);
    printf("enter the elements of the array\n");
    for (i = 0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("the array before sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", num[i]);
    }
    for (i = 0; i < n-1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1]){
                swap = num[j];
            num[j] = num[j + 1];
            num[j + 1] = swap;
        }
        }
    }
    printf("the array after sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d\n",num[i]);
    
    printf("\n**************************\n");
    return 0;
}
}