#include <stdio.h>
#include <limits.h>
#include <malloc.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* getNewNode(int data) {
  /* dynamically allocate memory for a new node */ 
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
 
  /* populate data in new Node */
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  
  return newNode;
}

/*
This function returns below tree
            1
           / \
         2    3
        / \    \
       4  5    6
      / \
     7  8
*/
struct node* generateBTree(){
    // Root Node
    struct node* root =  getNewNode(1);
 
    root->left = getNewNode(2);
    root->right = getNewNode(3);
 
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(5);
    root->right->right = getNewNode(6);
 
    root->left->left->left = getNewNode(7);
    root->left->left->right = getNewNode(8);
    
    return root;
}

int isLeafNode(struct node *nodePtr){
 if(nodePtr == NULL)
    return 0;
 else if (nodePtr->left == NULL && nodePtr->right == NULL)
    return 1;
 else 
    return 0;
}
/* This function calculates sum of all left leaf 
nodes in a binary tree */
int getleftLeafsSum(struct node *root) {

    int sum = 0;
    if (root != NULL) {
       /*Check if left node of root is a leaf node */
       if (isLeafNode(root->left)) {
           /* Add left leaf node data to sum */
        sum += root->left->data;
       } else {
           /* Recursively find sum of all left leaf 
     nodes in left sub tree */
           sum += getleftLeafsSum(root->left);
       }
 
        /* Recursively find sum of all left leaf 
   nodes in left sub tree */
        sum += getleftLeafsSum(root->right);
    }
    /* Sum sum of all left leaf node in a
  tree whose root node is root */
    return sum;
}

int main() {
    struct node *root = generateBTree();    
    
 printf("Left Leaf Sum : %d",getleftLeafsSum(root));
    
    getchar();
    return 0; 
}