#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *stack;
int top = -1;

void push(int ele)
{
    stack[++top] = ele;
}

int pop()
{
    return stack[top--];
}

int isPalindrome(int num)
{
    int original, len = 0, rev = 0,i=1, rem;
    stack = (int *)malloc(5 * sizeof(int));
    original = num;
    while (num != 0)
    {
        rem = num % 10;
        push(rem);
        num = num / 10;
        len++;
    }
    while (len != 0)
    {
        rem = pop();
        rev = rev  + rem*i;
        len--;
        i=i*10;
    }
    if (original == rev){
        return 1;
    }
    else{
    return 0;
    }               
}
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d", &num);
    if (isPalindrome(num))
    {
        printf("the number %d is palindrome \n", num);
    }
    else
    {
        printf("the number %d is  not palindrome \n", num);
    }
    return 0;
}