#include <stdio.h>
int main()
{
    int i, j, swap, size, arr[20];
   
 
        
            printf("\n*************\tBUBBLESORTING\t***************\n");
            printf("Enter the size of the array:\n");
            scanf("%d", &size);
            for (i = 0; i < size; i++)
            {
                printf("Enter the elements of the array\n ");

                scanf("%d", &arr[i]);
            }
            printf("The array before sorting is:\n");
            for (i = 0; i < size; i++)
            {
                printf(" %d\n", arr[i]);
            }
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size - 1 - i; j++)
                {
                    if (arr[j] > arr[j + 1]){
                        swap = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = swap;
                    }
                }
            }
        
        printf("The array after sorting is:\n");
        for (i = 0; i < size; i++)
        {
            printf(" %d\n", arr[i]);
        }
        
     

    
    
 printf("\n*************\tTHANK YOU\t*******************\n");
 return 0;
   
}