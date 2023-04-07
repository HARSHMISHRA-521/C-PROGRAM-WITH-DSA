#include <stdio.h>
#include <string.h>
#include <ctype.h>

char infix[50], postfix[50], stack[50];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

int pop()
{
    // char ele;
    // ele=stack[top];
    // top--;
    return stack[top--];
}

int priority(char ch)
{
    switch (ch)
    {
    case '+':
    case '-': return 1;
       
    case '*':
    case '/':return 2;
        
    case '^':return 3;
        
    case '#':
    case '(': return 0;
       
    }
}

void main()
{
    int i = 0, j = 0;
    char ele, ch;
    printf("enter the infix expression \n");
    scanf("%s", infix);
    push('#');
    for (i = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];
        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (stack[top] != '(')
                postfix[j++] = pop();
            ele = pop();
        }
        else
        {
            while (priority(stack[top]) >= priority(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }
    }
    while (stack[top]!= '#')
    {
        postfix[j++] = pop();
         }
        postfix[j] = '\0';
        printf("the postfix expression is %s \n", postfix);
   
}