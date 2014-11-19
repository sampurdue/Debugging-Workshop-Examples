#include "stdio.h"
#include "stdlib.h"

typedef struct sNode {
    int key;
    struct sNode* left;
    struct sNode* right;
} node;

typedef node* BinaryTree;

node * add(BinaryTree* root, int key)
{
    node* newnode = malloc(sizeof(node));
    newnode->key = key;
    newnode->left = NULL;
    newnode->right = NULL;
    
    if (*root == NULL)
    {
        *root = newnode;
        return newnode;
    }

    if (key < (*root)->key)
    {
        return add(&(*root)->left, key);
    }
    else
    {
        return add(&(*root)->right, key);
    }
}

int search(BinaryTree root, int key)
{
    if (root == NULL)
    {
        return 0;
    }
    if (key == root->key)
    {
        return 1;
    }
    else if (key < root->key)
    {
        return search(root->left,key);
    }
    else
    {
        return search(root->right,key);
    }

}

void print(BinaryTree root)
{
    if (root == NULL)
        return;

    print(root->left);
    printf("%d ", root->key);
    print(root->right);
}
        

void main()
{
    #define SIZE 7
    int args[] = {8,83,9127,2,303,983,103};
    
    BinaryTree tree = NULL;

    for (int i = 0; i < SIZE; i++)
    {
       add(&tree,args[i]);
    }


    // Where does it go wrong?  In the add routine or the search routine?
    if (search(tree, 2))
    {
        printf("Found 2\n");
    }
    else
    {
        printf("Error: didn't find 2\n");
    }
    
    if (search(tree, 3))
    {
        printf("Found 3\n");
    }
    else
    {
        printf("Didn't find 3\n");
    }

    // Print should print the elements of the tree in sorted order
    // An inorder walk of a binary tree gives a sorted list
    print(tree);
    printf("\n");

} 
