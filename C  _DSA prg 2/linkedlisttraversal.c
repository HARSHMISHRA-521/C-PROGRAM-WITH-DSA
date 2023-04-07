#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" THE ELEMENT IS : %d\n", ptr->data);
        ptr = ptr->link;
    }
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
    linkedlisttraversal(head);
    return 0;
}