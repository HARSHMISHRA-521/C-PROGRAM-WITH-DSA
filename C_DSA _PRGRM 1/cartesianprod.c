// C Program to find the Cartesian Product of Two Sets
#include <stdio.h>

void findCart(int A[], int B[], int n, int n1)
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n1; j++){
			printf("\t{%d, %d},\t ", A[i],B[j]);
        }
    }
}

int main()
{
	int A[] = { 1, 2, 3 }; // first set
	int B[] = { 4, 5, 6 }; // second set
	int n1 = sizeof(A) / sizeof(int);
	int n2 = sizeof(B) / sizeof(int);
	findCart(A, B, n1, n2);
	return 0;
}
