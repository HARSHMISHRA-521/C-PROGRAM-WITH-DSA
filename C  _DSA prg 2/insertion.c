#include <stdio.h>
int  capacity = 100;
int main()
{
    int index;int size;int capacity;int  i; int element;int arr[100];
    int choise;
    while(1)
    {
        printf("Enter the size of the array to be created : \n");
        scanf("%d", &size);
         if (size >= capacity)
    {
        printf("Array cannot be created . \n");
        return;
    }
        printf("enter the elements of the array : \n");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("the array before insertion is : \n");
        display(arr, size);
        printf("Enter the index no. at which the elemnet should be inserted : \n");
        scanf("%d", &index);
        printf("Enter the element to be inserted : \n");
        scanf("%d", &element);
        arrinsert(arr, size, index, element);
         size += 1;
        printf("the array after insertion is : \n");
        display(arr, size);
        printf("Enter 1 to continue or else 0 to exit.\n");
        scanf("%d",&choise);
        if(choise==0){
            printf("\n*******thank you********\n");
            return;
        }
    } 
    return 0;
}
void display(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("the %d element is : %d \n ", i + 1, arr[i]);
    }
}
void arrinsert(int arr[], int size, int index, int element)
{
    int i;
   
    for (i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
   
}

