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
        printf("the array before deletion is : \n");
        display(arr, size);
        printf("Enter the index no. at which the elemnet to be deleted : \n");
        scanf("%d", &index);
        
        arrdelete(arr, size, index);
         size -= 1;
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
    printf("the size of the array is %d\n",size); 
    for (i = 0; i < size; i++)
    {
        
        printf("the %d element is : %d \n ", i + 1, arr[i]);
    }
}
void arrdelete(int arr[], int size, int index)
{
    int i;
   
    for (i = index; i <size -1; i++)
    {
        arr[i] = arr[i+1];
    }
    
   
}

