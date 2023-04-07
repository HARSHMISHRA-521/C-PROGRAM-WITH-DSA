#include <stdio.h>
int n;
void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quicksort(int A[], int low, int high)
{
    int partitionindex; 
    // Index of pivot after partition
    if (low < high)
    {
        partitionindex = partition(A, low, high);
        printarray(A, n);
        quicksort(A, low, partitionindex - 1); // sort left subarray
        quicksort(A, partitionindex + 1, high); // sort right subarray
    }
}

int main()
{
    
    int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    n = sizeof(A) / sizeof(int);
    printarray(A, n);
    quicksort(A, 0, n - 1);
    printarray(A, n);
    return 0;
}
