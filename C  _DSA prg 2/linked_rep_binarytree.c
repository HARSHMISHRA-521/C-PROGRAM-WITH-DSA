#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node* createnode(int data){
    struct node *n;//creating a node pointer
    n=(struct node*)malloc(sizeof(struct node));//allocating memory
    n->data=data;//setting the data
    n->left=NULL;//setting the left and right children to null
    n->right=NULL;//setting the left and right children to Null
    return n;//finally returning the created node
}

int main(){
    /*
    //constructing the root node
     struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */

   //constructing the root node-using Function(recommended)
   struct node* p=createnode(2);
   struct node* p1=createnode(3);
   struct node* p2=createnode(4);

   //linking the left and right children with root node
   p->left=p1;
   p->right=p2;
   return 0;
}