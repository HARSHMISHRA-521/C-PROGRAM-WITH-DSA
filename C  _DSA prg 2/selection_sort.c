#include <stdio.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionsort(int *A, int n)
{
    int indexofmin, temp;
    printf("Running selection sort .... \n");
    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexofmin])
            {
                   indexofmin = j;
            }
        }
        // swap A[i] and A[indexofmin]
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin] = temp;
    }
}

int main()
{
    int A[] = {100, 99, 56, 21, 31, 3};
    // int n=sizeof(A)/sizeof(int);
    int n = 6;
    printarray(A, n);
    selectionsort(A, n);
    printarray(A, n);

    return 0;
}