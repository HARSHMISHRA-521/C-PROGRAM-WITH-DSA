#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coff;
    int expo;
    struct node *link;
};

struct node *insert(struct node *head, int ex, int co)
{
    struct node *temp;
    struct node * newp=(struct node*)malloc(sizeof(struct node));
    newp->coff=co;
    newp->expo=ex;
    newp->link =NULL;

    if(head==NULL|| ex>head->expo){
        newp->link = head;
        head = newp;
    }
    else{
        temp = head;
        while (temp->link != NULL && temp->link->expo >= ex)
        
            temp = temp->link;
            newp->link = temp->link;
            temp->link = newp;
        
      
    }
      return head;
}

struct node *create(struct node *head)
{
    int i, n;
    int coff, expo;
    printf("enter the no of terms : \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("eneter the coeffiecient of the %d term \n", i + 1);
        scanf("%d", &coff);
        printf("enter the exponent of the %d term \n", i + 1);
        scanf("%d", &expo);
        head = insert(head, expo, coff);
    }
    return head;
}


void print(struct node *head)
{
    if (head == NULL)
        printf("no polynomial \n");
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            printf("(%dx^%d)", temp->coff, temp->expo);
            temp = temp->link;
            if (temp != NULL)
                printf("+");
            else
                printf("\n");
        }
    }
}

void polyadd(struct node *head1, struct node *head2)
{
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *head3 = NULL;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->expo == ptr2->expo)
        {
            head3 = insert(head3, ptr1->expo, ptr1->coff + ptr2->coff);
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
        else if (ptr1->expo > ptr2->expo)
        {
            head3 = insert(head3, ptr1->expo, ptr1->coff);
            ptr1 = ptr1->link;
        }
        else if (ptr1->expo < ptr2->expo)
        {
            head3 = insert(head3, ptr2->expo, ptr2->coff);
            ptr2 = ptr2->link;
        }
    }
    while (ptr1 != NULL)
    {
        head3 = insert(head3, ptr1->expo, ptr1->coff);
        ptr1 = ptr1->link;
    }
    while (ptr2 != NULL)
    {
        head3 = insert(head3, ptr2->expo, ptr2->coff);
        ptr2 = ptr2->link;
    }
    printf("added polynomial is : \n");
    print(head3);
}

int main()
{
    struct node *head1 = NULL;
    struct node *head2 = NULL;
    printf("enter the first polynomial \n");
    head1 = create(head1);
    printf("enter the second polynomial \n");
    head2 = create(head2);
    printf("the first polynomial is : \n");
    print(head1);
    printf("the second polynomial is : \n");
    print(head2);
    polyadd(head1, head2);
    return 0;
}