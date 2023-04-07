#include <stdio.h>

void create();
void display();
void insert();
void delete ();

int n, count, arr[150];

int main()
{
    int ch;
    while (1)
    {
        printf("\n ARRAY OPERATIONS MENU : \n");
        printf("\n 1.create an array : \n");
        printf("\n 2.display an array elements : \n");
        printf("\n 3.insert an elemnet at an position : \n");
        printf("\n 4.delete an elemenet at an position : \n");
        printf("\n 5.exit : \n");
        printf("\n enter your choice : \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (count == 0 || n == 0)
                create();
            else
                printf("array already created \n");
            break;
        case 2:
            if (count == 0 || n < 0)
                printf("array not created ,create an array \n");
            else
                display();
            break;
        case 3:
            if (count == 0 || n < 0)
                printf("array not created ,create an array \n");
            else
                insert();
            break;
        case 4:
            if (count == 0 || n < 0)
                printf("array not created ,create an array \n");
            else
                delete ();
            break;
        case 5:
            return 0;
        default:
            printf("invalid choice!\n");
        }
    }
}
void create()
{
    int i;
    printf("enter the number of elements \n");
    scanf("%d", &n);
    printf("enter the elements of the array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        count++;
    }
}
void display()
{
    int i;
    printf("the arrays elements are : \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void insert()
{
    int i, pos, elem;
    printf("enter the position : \n");
    scanf("%d", &pos);
    printf("enter the element to be inserted : \n");
    scanf("%d", &elem);
    if (pos < 0 || pos > n + 1)
    {
        printf("invalid postion!\n");
    }
    else
    {
      pos--;
        for (i = n - 1; i >=pos; i--)
        {
            arr[i + 1] = arr[i];
            //arr[pos] = elem;
        }
        arr[pos] = elem;
        n++;
    }
}
void delete ()
{
    int i, pos, val;
    printf("enter the position : \n");
    scanf("%d", &pos);
    if (pos < 0 || pos > n)
    {
        printf("invlaid position!\n");
    }
    else
    {
        val = arr[--pos];
        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("the element deleted is %d\n", val);
    }
}