#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 20;
    head->next = first;
    head->prev = NULL;
    
    first->data = 30;
    first->next = second;
    first->prev = head;
    
    second->data = 40;
    second->next = third;
    second->prev = first;
    
    third->data = 50;
    third->next = fourth;
    third->prev = second;
    
    fourth->data = 60;
    fourth->next = NULL;
    fourth->prev = third;

    forwardtraversal(head);
    printf("\n\n");
    backwardtraversal(fourth);
    return 0;
}
void forwardtraversal(struct node *head)
{
    while (head != NULL)
    {
        printf("THE FORWARD TRAVERSAL ELEMENTS ARE :  %d \n", head->data);
        head = head->next;
    }
}
    void backwardtraversal(struct node * ptr)
    {
        while (ptr != NULL)
        {
            // ptr = ptr->next;
       
            printf("THE BACKWARD TRAVERSAL ELEMENTS ARE :  %d \n", ptr->data);
            ptr = ptr->prev;
        }
    }