
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int b;
    int *arr;
};

int isfull(struct queue *q)             
{
    if (q->b == q->size-1 )
    {
        return 1;
    }
    return 0;
}
int isempty(struct queue *q)
{
    if (q->f == q->b)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("the queue is full and element %d cannot be inserted\n", val);
    }
    else
    {
        q->b++;
        q->arr[q->b] = val;
        printf("the element enqueued is %d\n", val);
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        printf("the queue is empty \n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue *q;
    q->size = 10;
    q->f = q->b = -1;  //HERE WE ARE INITIALISIG F AND B AS -1 IN LINEAR QUEUE.
    q->arr = (int *)malloc(q->size * sizeof(int));

    if (isempty(q))
    {
        printf("the queue is empty\n");
    }
    enqueue(q, 100);
    enqueue(q, 99);
    enqueue(q, 98);
    enqueue(q, 97);

    if (isempty(q))
    {
        printf("the queue is empty\n");
    }

    if (isfull(q))
    {
        printf("the queue is full\n");
    }
    enqueue(q, 96);
    enqueue(q, 95);
    enqueue(q, 94);
    enqueue(q, 93);
    enqueue(q, 92);
    enqueue(q, 91);
    enqueue(q, 90);
    printf("the element dequeud is %d \n",dequeue(q));
    printf("the element dequeud is %d \n",dequeue(q));
    enqueue(q, 40);
    if (isfull(q))
    {
        printf("the queue is full\n");
    }
    return 0;
}