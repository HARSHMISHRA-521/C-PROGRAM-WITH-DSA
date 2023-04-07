// The InOrder traversal of a binary search tree gives an ascending sorted array.
//so we will use the inorder travesal and check the ascending order for being a bst

#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
           inorder(root->right);
    }
}

int isbst(struct node* root){
    static struct node * prev=NULL;
    if(root!=NULL){
        if(!isbst(root->left)){
            return 0;
        }
        if(prev!=NULL && prev->data>=root->data){
            return 0;
        }
        prev= root;
        return isbst(root->right);
    }
    else{
        return 1;
    }
}

int main(){
    // Constructing the root node - Using Function (Recommended)
    struct node *p =  createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inorder(p);
    printf("\n");
    if(isbst(p)){
        printf("This is a bst \n");
    }
    else{
        printf("This is not a bst \n");
    }
    return 0;
}