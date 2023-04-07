#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    char usn[20], name[20];
    int sem;
    struct node *link;
}node;
struct node *head = NULL;
int i, n;

void create_node()
{
    printf("enter the no of students : \n");
    scanf("%d\n", &n);
    printf("Enter the students detail : \n");
    for (i = 0; i < n; i++)
    {
        insert_front();
    }
}

void insert_front()
{
   struct node *newnode;
    newnode = ( struct node *)malloc(sizeof(struct node));
    printf("enter the USN NAME & SEM OF %d student \n", i + 1);
    scanf("%c %c %d \n", newnode->usn, newnode->name, &newnode->sem);
    newnode->link = head;
    head = newnode;
}

void display()
{
    if (head == NULL)
    {
        printf("list is empty \n");
        return;
    }
   struct node *temp = head;
    int total = 0;
    printf("the student details are : \n");
    printf("USN  NAME  SEM \n");
    while (temp != NULL)
    {
        printf("%c\t%c\t%d\n ", temp->usn, temp->name, temp->sem);
        printf("\n");
        temp = temp->link;
        total++;
    }
    printf("the no of students are : %d \n", total);
}

void delete_front()
{
    if (head == NULL)
    {
        printf("\n list is empty!\n");
        return;
    }
    node *temp = head;
    head = head->link;
    free(temp);
}

void insert_rear()
{
    node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    node *temp;
    printf("enter the USN NAME & SEM OF %d student \n", i + 1);
    scanf("%c %c %d \n", newnode->usn, newnode->name, &newnode->sem);
    newnode->link = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newnode;
    }
}

void delete_rear()
{
    if (head == NULL)
    {
        printf("\n list is empty!\n");
        return;
    }
    node *last, *temp;
    last = temp = head;
    while (temp->link != NULL)
    {
        last = temp;
        temp = temp->link;
    }
    last->link = NULL;
    free(temp);
}

int stack()
{
    int ch;
    while (1)
    {
        printf("1.Insert at front(push)\n2.Delte at front(pop)\n3.Display\n4.Exit\n  ");
        printf("eneter your choice \n");
        scanf("%d \n", &ch);
        switch (ch)
        {
        case 1:
            insert_front();
            break;
        case 2:
            delete_front();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("\n invalid choice \n");
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n STUDENTS RECORD data using singly linked list \n");
        printf("1.CREATE A LIST OF STUDENTS \n 2.DISPLAY LIST \n 3.INSERT AN ITEM AT FRONT\n4.DELETE ITEM AT FRONT \n 5.INSERT ITEM FROM REAR \n 7.STACK IMPLEMENTATION \n8.EXIT\n");
        printf("eneter the choice: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create_node();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_front();
            ;
            break;
        case 4:
            delete_front();
            break;
        case 5:
            insert_rear();
            break;
        case 6:
            delete_rear();
            break;
        case 7:
            stack();
            break;
        case 8:
            return 0;
        default:
            printf("\n invalid choice \n");
        }
    }
}