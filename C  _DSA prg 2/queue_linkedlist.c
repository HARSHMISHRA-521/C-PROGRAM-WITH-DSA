#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("the elements are : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("queue is full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    linkedlisttraversal(f);
    printf("dequeueing element %d \n", dequeue());
    enqueue(100);
    enqueue(99);
    enqueue(98);
    enqueue(97);
    enqueue(96);
    linkedlisttraversal(f);
    printf("dequeueing element %d \n", dequeue());
    printf("dequeueing element %d \n", dequeue());
    printf("dequeueing element %d \n", dequeue());
    printf("dequeueing element %d \n", dequeue());
    printf("dequeueing element %d \n", dequeue());
    enqueue(66);
    linkedlisttraversal(f);
    return 0;
}