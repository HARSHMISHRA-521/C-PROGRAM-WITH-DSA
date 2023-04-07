#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

int getheight(struct node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

struct node *createnode(int key)
{
    struct node *Node = (struct node *)malloc(sizeof(struct node));
    Node->key = key;
    Node->left = NULL;
    Node->right = NULL;
    Node->height = 1;
    return Node;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int getbalancefactor(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getheight(n->left) - getheight(n->right);
}

// below rotations written wrt a tree in code with harry's lecture

struct node *rightrotate(struct node *y)
{
    struct node *x = y->left;
    struct node *t = x->right;

    x->right = y;
    y->left = t;

    x->height = max(getheight(x->right), getheight(x->left)) + 1;
    y->height = max(getheight(y->right), getheight(y->left)) + 1;

    return x;
}

struct node *leftrotate(struct node *x)
{
    struct node *y = x->right;
    struct node *t = y->left;

    y->left = x;
    x->right = t;

    x->height = max(getheight(x->right), getheight(x->left)) + 1;
    y->height = max(getheight(y->right), getheight(y->left)) + 1;

    return y;
}

struct node *insert(struct node *node, int key)
{
    if (node == NULL)
        return createnode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    node->height = 1 + max(getheight(node->left), getheight(node->right));
    int bf = getbalancefactor(node);

    // left left case
    if (bf > 1 && key < node->left->key)
    {
        return rightrotate(node);
    }
    // right right case
    if (bf < -1 && key > node->right->key)
    {
        return leftrotate(node);
    }
    // left right case
    if (bf > 1 && key > node->left->key)
    {
        node->left = leftrotate(node->left);
        return rightrotate(node);
    }
    // right left case
    if (bf < -1 && key < node->right->key)
    {
        node->right = rightrotate(node->right);
        return leftrotate(node);
    }
    return node;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preOrder(root);
    return 0;
}