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
struct node*deleteatfirst(struct node *head){
    struct node *ptr=head;
    head=head->link;
    free(ptr);
    return head;
}
struct node *deleteatindex(struct node *head ,int index){
    struct node *ptr=head;
    struct node *q=head->link;
    for(int i=0;i<index-1;i++){
        ptr=ptr->link;
        q=q->link;
    }
    ptr->link=q->link;
    free(q);
    return head;
}
struct node *deleteatend(struct node *head){
    struct node *p=head;
    struct node *q=head->link;
    while(q->link!=NULL){
        p=p->link;
        q=q->link;
    }
    p->link=NULL;
    free(q);
    return head;
}
struct node *deleteatvalue(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->link;
    while(q->data!=value && q->link!=NULL){
        p=p->link;
        q=q->link;
    }
    if(q->data==value){
        p->link=q->link;
    }
    free(q);
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
     printf("linked list before deletion at first: \n");
     linkedlisttraversal(head);
     head = deleteatfirst(head);
     printf("linked list after deletion at first : \n");
     linkedlisttraversal(head);
     
     printf("linked list before deletion at index: \n");
     linkedlisttraversal(head);
     head = deleteatindex(head,2);
     printf("linked list after deletion at index : \n");
     linkedlisttraversal(head);
//  
     printf("linked list before deletion at end: \n");
     linkedlisttraversal(head);
     head = deleteatend(head);
     printf("linked list after deletion at end : \n");
     linkedlisttraversal(head);
 
    printf("linked list before deletion at value: \n");
    linkedlisttraversal(head);
    head = deleteatvalue(head,77);
    printf("linked list after deletion at value : \n");
    linkedlisttraversal(head);
    return 0;
}