/*
#include<stdio.h>
#include<stdlib.h>
// Structure for a node in the BST
struct node
{
    struct node * left ;
    int data;
    struct node * right;
};
// Function to create a new node
struct node * createnode(int value)
{
    struct node * newnode=(struct node*)malloc (sizeof(struct node));
    if (newnode==NULL)
    {
        printf("memory not allocated");
        return NULL;
    }
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
// Function to insert a node into the BST
void insert(struct node ** root ,int value)
{
    if (*root==NULL)
    {
        *root=createnode(value);
        return;
    }
    if (value<(*root)->data)
    {
        insert(&((*root)->left),value);
    }
    else if (value>(*root)->data)
    {
        insert(&((*root)->right),value);
    }
}
// Function to find the node with the second-highest data
struct node* findSecondHighest(struct node* root)
{
    if (root!=NULL || (root->left!=NULL && root->right!=NULL))
        return NULL;
    struct node* parent = NULL;
    struct node* current = root;
    // Traverse to the rightmost node
    while (current->right!=NULL)
    {
        parent = current;
        current = current->right;
    }
    // If the rightmost node has a left subtree
    if (current->left)
    {
        current = current->left;
        while (current->right)
        {
            current = current->right;
        }
        return current;
    }
    return parent;
}
// Function to delete a node in BST
struct node* deleteNode(struct node* root, int key) {
    if (root!=NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with one child or no child
        if (root->left!=NULL)
        {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right!=NULL)
        {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        // Node with two children: Get the inorder successor
        struct node* temp = root->right;
        while (temp->left)
            temp = temp->left;
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
// Function to count nodes having a common parent
int countNodesWithParent(struct node* root) {
    if (root==0 || (root->left && root->right==0))
        return 0;
    int count = 0;
    if (root->left!=0)
        count++;
    if (root->right!=)
        count++;
    return count + countNodesWithParent(root->left) + countNodesWithParent(root->right);
}
// Function to find the height of the BST
int findHeight(struct node* root)
{
    if (root==0)
        return 0;
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}
// Function to count nodes on the left-hand side of the root
int countLeftNodes(struct node* root) {
    if (root==0 || root->left==0)
        return 0;
    return 1 + countLeftNodes(root->left) + countLeftNodes(root->left->right);
}
void inorder (struct node * root)
{
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void countleafnode(struct node * root)
{
    int c=0;
    if (root->left==NULL && root->right==NULL)
    {
        c++;
    }
    countleafnode(root->left);
    countleafnode(root->right);
    printf("%d",c);
}
int main()
{
    struct node* root = NULL;
    int choice, value;

    do {
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert a node\n");
        printf("2. Find the second highest node\n");
        printf("3. Delete a node\n");
        printf("4. Count nodes having a common parent\n");
        printf("5. Find the height of the tree\n");
        printf("6. Count nodes on the left-hand side of the root\n");
        printf("7. Display inorder traversal\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insert(&root, value);
            printf("Node inserted.\n");
            break;
        case 2: {
            struct node* secondHighest = findSecondHighest(root);
            if (secondHighest)
                printf("Second highest node: %d\n", secondHighest->data);
            else
                printf("Second highest node not found.\n");
            break;
        }
        case 3:
            printf("Enter the value to delete: ");
            scanf("%d", &value);
            root = deleteNode(root, value);
            printf("Node deleted (if it existed).\n");
            break;
        case 4: {
            int commonParentNodes = countNodesWithParent(root);
            printf("Total nodes having a common parent: %d\n", commonParentNodes);
            break;
        }
        case 5: {
            int height = findHeight(root);
            printf("Height of BST: %d\n", height);
            break;
        }
        case 6: {
            int leftNodes = countLeftNodes(root);
            printf("Total nodes on the left-hand side of root: %d\n", leftNodes);
            break;
        }
        case 7:
            printf("Inorder traversal of BST: ");
            inorder(root);
            printf("\n");
            break;
        case 8:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);
    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
struct bst
{
    struct bst *left;
    int data;
    struct bst *right;
};
struct bst *insert(struct bst *root, int data)
{
    if (root == NULL)
    {
        struct bst *temp = (struct bst *)malloc(sizeof(struct bst));
        if (temp == NULL)
        {
            printf("memory not allocated");
            return NULL;
        }
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}
void inorder(struct bst *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
    // printf("\n");
}
struct bst *secondhighest(struct bst *root)
{
    if (root == NULL || root->left == NULL && root->right == NULL)
    {
        return NULL;
    }
    struct bst *parent = NULL;
    struct bst *current = root;
    while (current->right != NULL)
    {
        parent = current;
        current = current->right;
    }
    // If the rightmost node has a left subtree
    if (current->left)
    {
        current = current->left;
        while (current->right)
        {
            current = current->right;
        }
        return current;
    }
    return parent;
}
int search(struct bst *root, int data)
{
    if (root == NULL)
        return 0;
    if (root->data == data)
    {
        printf("Node found");
        return 1;
    }
    if (data < root->data)
    {
        search(root->left, data);
    }
    else
    {
        search(root->right, data);
    }
}

struct bst *delete(struct bst *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (key < root->data)
    {
        root = delete (root->left, key);
    }
    else if (key > root->data)
    {
        root = delete (root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            struct bst *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct bst *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            struct bst *temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = delete (root->right, temp->data);
        }
    }
    return root;
}
int findHeight(struct bst *root)
{
    if (root == NULL)
    {
        return -1; // Height of an empty tree is -1
    }
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1; // Add 1 for the current node
}
int main()
{
    struct bst *root = NULL;
    int ch, data, a;
    do
    {
        printf("1. insert node 2.delete a node 3. inorder tree traversal 4. serach 5.find height\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter data:");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:
            printf("enter data:");
            scanf("%d", &data);
            root = delete (root, data);
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            printf("enter data to be serached:");
            scanf("%d", &data);
            a = search(root, data);
            break;
        case 5:
            findHeight(root);
            break;
        default:
            printf("wrong choice entered");
            break;
        }
    } while (ch < 5);
}
