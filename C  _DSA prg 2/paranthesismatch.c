#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
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
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr, char val)
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
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow ! cannot pop from the stack\n");
    }
    else
    {
            char ele = ptr->arr[ptr->top];
            ptr->top--;
            return ele;
    }
}

int parenthesisMatch(char *exp)
{
    struct stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(s, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }

    if (isEmpty(s))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char *exp = "(67-2*6)=86";
    if (parenthesisMatch(exp))
    {
        printf("The parenthesis is balanced \n");
    }
    else
    {
        printf("The parenthesis  is not balanced \n");
    }

    return 0;
}
