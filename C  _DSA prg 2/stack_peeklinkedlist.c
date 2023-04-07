#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENT : %d \n", ptr->data);
        ptr = ptr->next;
    }
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

int peek(int pos){
    struct node *ptr=top;
    for(int i=0;(i<pos-1&&ptr!=NULL);i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
    return -1;
    printf("the position does not exist \n");
    }
}
int main()
{
    
    top = push(top, 100);
    top = push(top, 99);
    top = push(top, 98);
    top = push(top, 97);
    linkedlisttraversal(top);

    for(int i=1;i<=4;i++){
            printf("the element at the %d pos is: %d\n",i,peek(i));
    }
   
    return 0;
}