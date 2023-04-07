#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = head;
    return ptr;
}

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" THE ELEMENT IS : %d\n", ptr->data);
        ptr = ptr->link;
    }
}
struct node *insertatindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->link;
        i++;
    }

    ptr->data = data;
    ptr->link = p->link;
    p->link = ptr;
    return head;
}
struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->link != NULL)
    {
        p = p->link;
    }
    ptr->data = data;
    p->link = ptr;
    ptr->link = NULL;
    return head;
}
struct node *insertionafternode(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = prevnode->link;
    prevnode->link = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 55;
    head->link = second;

    second->data = 77;
    second->link = third;

    third->data = 66;
    third->link = fourth;

    fourth->data = 88;
    fourth->link = NULL;
    printf("linked list before insertion at first: \n");
    linkedlisttraversal(head);
    head = insertatfirst(head, 100);
    printf("linked list after insertion at first : \n");
    linkedlisttraversal(head);

    printf("\nlinked list before insertion at index :\n");
    linkedlisttraversal(head);
    head = insertatindex(head, 800, 2);
    printf("linked list after insertion at index :\n");
    linkedlisttraversal(head);

    printf("\nlinked list before insertion at end : \n");
    linkedlisttraversal(head);
    head = insertatend(head, 1000);
    printf("linked list after insertion at end : \n");
    linkedlisttraversal(head);

    printf("\nlinked list before insertion after node :  \n");
    linkedlisttraversal(head);
    head = insertionafternode(head, second, 2000);
    printf("linked list after insertion after node :  \n");
    linkedlisttraversal(head);

    return 0;
}
