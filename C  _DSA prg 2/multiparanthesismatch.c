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
int match(char a, char b)
{
    if (a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int parenthesisMatch(char *exp)
{
    struct stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    char popped;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            popped = pop(s);
            if (!match(popped, exp[i]))
            {
                return 0;
            }
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
    char *exp = "[45+56{662-52}+9(67-2*6)]=86";
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
