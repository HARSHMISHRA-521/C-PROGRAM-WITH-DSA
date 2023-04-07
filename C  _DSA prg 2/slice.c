#include <stdio.h>
#include <string.h>
int main()
{
    int m, n, length;
    char arr[80];
    printf("ENTER THE ARRAY :\n");
    scanf("%s", arr);
    length = strlen(arr);
    printf("The length of the string is : %d\n", length);
    printf("Enter the starting index of the string\n ");
    scanf("%d", &m);
    printf("Enter the ending index of the string\n ");
    scanf("%d", &n);
    slice(arr, m, n);
    printf("The array after slicing is :\n");
    printf("%s", arr);
    return 0;
}
void slice(char arr[], int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        arr[i] = arr[m + i];
        i++;
    }
    arr[i] = '\0';
}