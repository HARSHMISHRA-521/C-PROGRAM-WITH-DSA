#include <stdio.h>
int main()
{
    int arr[30], i, j, size, swap;
    int greatest = 0;
    int lowest = 0;
    printf("Enter the array size to be created : \n");
    scanf("%d", &size);
    printf("enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("THE %d ELEMENT IS : \n", i + 1);
        scanf("%d", &arr[i]);
    }
       printf("the array before sorting:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    //  bubblesort(arr,size);
    for (i = 0; i < size - 1; i++)
    {

        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
  }
      printf("the array after sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d\n",arr[i]);

        // greatest = arr[size - 1];
        // lowest = arr[0];
        printf("the greatest element is % d \n", arr[size-1]);
        printf("the lowest integer is : %d \n", arr[0]);
       
  
     return 0;
}
  