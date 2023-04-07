#include <stdio.h>
#define smax 5
void insert();
void del();
void display();
int rear = 1, front = 0, count;
char queue[smax];
void main()
{
    int ch;
    while (1)
    {
        printf("\n CIRCULAR QUEUE IMPLEMENTATION\n");
        printf("1. INSERT \n");
        printf("2. DELETE \n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("\n ENTER YOURCHOICE\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            del();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\n INVALID CHOICE\n");
        }
    }
}
void insert()
{
    char item;
    if (count >= smax)
        printf("\n QUEUE FULL\n");
    else
    {
        printf("enter the item to be inserted\n");
        scanf("%c", &item);
        rear = (rear + 1) % smax;
        queue[rear] = item;
        count++;
    }
}
void del()
{
    char d;
    if (count <= 0)
        printf("\n QUEUE UNDER FLOW\n");
    else
    {
        d = queue[front];
        front = (front + 1) % smax;
        printf("\n the deleted element is %c", d);
        count--;
    }
}
void display()
{
    int i, j;
    if (count <= 0)
        printf("\n QUEUE UNDER FLOW\n");
    else
    {
        i = front;
        for (j = 1; j <= count; j++)
        {
            printf("%c\t", queue[i]);
            i = (i + 1) % smax;
        }
    }
}
