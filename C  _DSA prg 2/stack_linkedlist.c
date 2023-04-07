#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENT : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}
struct node *push(struct node *top, int d)
{
    if (isfull(top))
    {
        printf("stack overflow!\n");
    }
    else
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = d;
        p->next = top;
        top = p;
        return top;
    }
}
int pop(struct node **top)
{
    if (isempty(*top))
    {
        printf("stack underflow \n");
    }
    else
    {
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int main()
{
    struct node *top = NULL;
    top = push(top, 100);
    top = push(top, 99);
    top = push(top, 98);
    top = push(top, 97);
    linkedlisttraversal(top);
    int element = pop(&top);
    printf("the element popped is %d \n", element);
    linkedlisttraversal(top);
    return 0;
}