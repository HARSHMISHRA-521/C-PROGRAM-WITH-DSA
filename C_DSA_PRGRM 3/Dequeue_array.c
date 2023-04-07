#include <stdio.h>
 #define size 5
// int size=5;
int queue[size];
int f = -1;int r = -1;

void enqueuefront(int val)
{
    if ((f == 0 && r == size - 1) || (f == r + 1))
    {
        printf("queue is full ! \n");
        printf("the element %d cannot be enqueued \n", val);
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        queue[f] = val;
    }
    else if (f == 0)
    {
        f = size - 1;
        queue[f] = val;
    }
    else
    {
        f--;
        queue[f] = val;
    }
}

void enqueuerear(int val)
{
    if ((f == 0 && r == size - 1) || (f == r + 1))
    {
        printf("queue is full ! \n");
        printf("the element %d cannot be enqueued \n", val);
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        queue[r] = val;
    }
    else if (r == size - 1)
    {
        r = 0;
        queue[r] = val;
    }
    else
    {
        r++;
        queue[r] = val;
    }
}

void display()
{
    int i = f;
    if (f == -1 && r == -1)
    {
        printf("queue is empty!\n");
    }
    else
    {
        while (i != r)
        {
            printf("the %dth  element is : %d \n", i + 1, queue[i]);
            i = (i + 1) % size;
        }
        printf("the %d th element is : %d \n", r + 1, queue[r]);
    }
}

void getfront()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty!\n");
    }
    printf("the front element is  : %d \n", queue[f]);
}

void getrear()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty!\n");
    }
    printf("the rear element is  : %d \n", queue[r]);
}

void dequeuefront()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty!\n");
    }
    else if (f == r)
    {
        printf(" the deueued element is %d \n", queue[f]);
        f = r = -1;
    }
    else if (f == size - 1)
    {
        printf("the deueued element is %d \n", queue[f]);
        f = 0;
    }
    else
    {
        printf("the dequed element %d \n", queue[f]);
        f++;
    }
}

void dequeuerear()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty!\n");
    }
    else if (f == r)
    {
        printf(" the deueued element is %d \n", queue[f]);
        f = r = -1;
    }
    else if (r == 0)
    {
        printf("the deueued element is %d \n", queue[r]);
        f = size - 1;
    }
    else
    {
        printf("the dequed element %d \n", queue[r]);
        r--;
    }
}

int main()
{
    enqueuefront(20);
    enqueuefront(30);
    enqueuerear(90);
    enqueuerear(80);
    enqueuerear(1000);
    enqueuefront(10);
    display();
    getfront();
    getrear();
    dequeuefront();
    dequeuefront();
    dequeuefront();
    display();
    getfront();
    getrear();
    return 0;
}