#include <stdio.h>

void printArray(int A[], int n)
{ // write either *A or A[] its same
    for (int i = 0; i < n; i++)
    {
        printf("  %d  ", A[i]);
    }
    printf("\n");
}

void bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) // for number of passes
    {
        printf("Working on pass number %d\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++) // for comparision in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void bubblesortAdaptive(int *A, int n)
{
    int temp;
    int issorted = 0;
    for (int i = 0; i < n - 1; i++) // for number of passes
    {
        printf("Working on pass number %d\n", i + 1);
        issorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // for comparision in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted)
        {
            return;
        }
    }
}

int main()
{
    // int A[]={12,15,78,2,3,69,88,100,1,0,50};
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    printArray(A, n); // printing array before sorting
    // bubblesort(A,n);//function to sort the array
    bubblesortAdaptive(A, n);
    printArray(A, n); // printing the array after sorting
    return 0;
}