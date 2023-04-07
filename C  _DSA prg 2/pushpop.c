#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr)
{
    if (ptr->top==ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("\nSTACK OVERFLOW!\tTHE %d ELEMENT CANNOT BE PUSHED \n ", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow ! \n");
    }
    else
    {
        int ele = ptr->arr[ptr->top];
        ptr->top--;
        return ele;
    }
}
int main()
{
    struct stack *p = (struct stack *)malloc(sizeof(struct stack));
    p->size = 10;
    p->top = -1;
    p->arr = (int *)malloc(p->size * sizeof(int));
    printf("the stack is created successfully\n");
    printf("\nstack before pushing, is full (0->no/1->yes) : %d", isFull(p));
    printf("\nstack before pushing, is empty (0->no/1->yes) : %d", isEmpty(p));
    push(p, 100);
    push(p, 99);
    push(p, 98);
    push(p, 97);
    push(p, 96);
    push(p, 95);
    push(p, 94);
    push(p, 93);
    push(p, 92);
    push(p, 91);
    push(p, 91);
    printf("\nstack after pushing, is full (0->no/1->yes) : %d", isFull(p));
    printf("\nstack after pushing, is empty (0->no/1->yes) : %d", isEmpty(p));
    printf("\nthe element poped out is %d \n", pop(p));
    printf("\nthe element poped out is %d \n", pop(p));
    printf("\nthe element poped out is %d \n", pop(p));
    return 0;
}
