/*#include <stdio.h>
#include <stdlib.h>
struct snode
{
    int info;
    struct snode *next;
};
struct snode * insertatfront(struct snode *head)
{
    struct snode *temp;
    temp = (struct snode *)malloc(sizeof(struct snode));
    if (temp == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        int item;
        printf("enter value for item :");
        scanf("%d", &item);
        if (head == NULL)
        {
            temp->next = NULL;
            temp->info = item;
            head = temp;
        }
        else
        {
            struct snode *p1=head;
            temp->next=p1;
            temp->info= item;
            head=temp;
        }
    }
    return head;
}
struct snode * reverse(struct snode * head)
{

    if (head==NULL)
    {
        printf("list is empty");
        return head;
    }
    struct snode* current=head ,* prev=NULL, *next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
void print(struct snode *head)
{
    struct snode *p1=head;
    while(p1!=NULL)
    {
        printf("%d ",p1->info);
        p1=p1->next;
    }
    printf("\n");
}
int main()
{
    int ch;
    struct snode *head = NULL;
    do
    {
        printf("enter your choice 1. insert 2.reverse 3. print :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head=insertatfront(head);
            break;
        case 2:
            head=reverse(head);
            break;
        case 3:
            print(head);
            break;
        default:
            break;
        }
    } while (ch<4 );
    return 0;
}
*/
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int roll;
    struct student *next;
};
struct student *insertatfront(struct student *head) //inerting nodes in a singly linked list
{
    struct student *temp;
    temp = (struct student *)malloc(sizeof(struct student));
    if (temp == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("enter name :");
        scanf("%s", temp->name);
        printf("Enter roll number:");
        scanf("%d",&temp->roll);
        temp->next = head;
        head=temp;
    }
    return head;
}
struct student *removeduplicates(struct student *head) //remove duplicate nodes
{
    struct student *p1 = head, *p2 , *p3 ;
    if (head==NULL)
    {
        printf("List is empty");
        return head;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    }
    while (p1->next != NULL)
    {
        p2=p1;
        p3=p1->next;
        while (p3 != NULL)
        {
            if (strcmp(p1->name, p3->name) == 0)
            {
                p2->next = p3->next;
                free(p3);
                p2 = p3->next;
            }
            else
            {
                p2 = p3;
                p3 = p3->next;
            }
        }
        p1=p1->next;
    }
    return head;
}
void print(struct student *head)//print linked list
{
    struct student *p1=head;
    while(p1!=NULL)
    {
        printf("%s,%d \n",p1->name,p1->roll);
        p1=p1->next;
    }
    printf("\n");
}
int main()
{
    int ch;
    struct student *head = NULL;
    do
    {
        printf("enter your choice 1. insert 2.remove duplicates 3. print :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head=insertatfront(head);
            break;
        case 2:
            head=removeduplicates(head);
            break;
        case 3:
            print(head);
            break;
        default:
            break;
        }
    } while (ch<4 );
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // Add this line to define INT_MAX
// Structure for a single linked list node
struct Node
{
    int data;
    struct Node *next;
};
// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the end of the list
void insertNode(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
// Function to find and delete the node with the second minimum data
void deleteSecondMin(struct Node **head)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        printf("List has less than two nodes.\n");
        return;
    }
    struct Node *temp = *head, *secondMinNode = NULL, *prev = NULL, *prevSecondMin = NULL;
    int min = INT_MAX, secondMin = INT_MAX;
    // First pass: Find the minimum and second minimum values
    while (temp != NULL)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    temp = *head;
    while (temp != NULL)
    {
        if (temp->data < secondMin && temp->data > min)
        {
            secondMin = temp->data;
        }
        temp = temp->next;
    }
    if (secondMin == INT_MAX)
    {
        printf("No second minimum found.\n");
        return;
    }
    // Second pass: Find the node with second minimum and its previous node
    temp = *head;
    while (temp != NULL)
    {
        if (temp->data == secondMin)
        {
            secondMinNode = temp;
            break;
        }
        prevSecondMin = temp;
        temp = temp->next;
    }
    // Delete the second minimum node
    if (secondMinNode != NULL)
    {
        if (prevSecondMin == NULL)
        {
            // The second minimum is the first node
            *head = secondMinNode->next;
        }
        else
        {
            prevSecondMin->next = secondMinNode->next;
        }
        printf("Deleted node with second minimum value: %d\n", secondMin);
        free(secondMinNode);
    }
}
// Function to print the linked list
void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
// Main function
int main()
{
    struct Node *head = NULL;
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the data for the nodes:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Node %d: ", i + 1);
        scanf("%d", &data);
        insertNode(&head, data);
    }
    printf("\nOriginal List: ");
    printList(head);
    deleteSecondMin(&head);
    printf("\nList after deleting the node with second minimum value: ");
    printList(head);
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
struct snode // Define a node structure
{
    int data;
    struct snode *next;
};
// Function to insert a node at the end
struct snode *insertatfront(struct snode *head)
{
    struct snode *temp;
    temp = (struct snode *)malloc(sizeof(struct snode));
    if (temp == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        int item;
        printf("enter value for item");
        scanf("%d", &item);
        if (head == NULL)
        {
            temp->next = NULL;
            temp->data = item;
            head = temp;
        }
        else
        {
            struct snode *p1=head;
            temp->next=p1;
            temp->data= item;
            head=temp;
        }
    }
    return head;
}
// Function to display the linked list
void displayList(struct snode *head)
{
    struct snode *p1 = head;
    while (p1 != NULL)
    {
        printf("%d ->", p1->data);
        p1 = p1->next;
    }
    printf("NULL\n");
}
// Function to check if any two nodes have multiplication less than the target
int checkMultiplication(struct snode *head, int target)
{
    struct snode *ptr1 = head;
    struct snode *ptr2;
    while (ptr1 != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            if (ptr1->data * ptr2->data < target)
            {
                return 1; // Found two nodes
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return 0; // No such nodes found
}

int main()
{
    struct snode *head = NULL;
    int choice, value, target;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert a node\n");
        printf("2. Display the list\n");
        printf("3. Check for nodes with multiplication less than target\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head=insertatfront(head);
            break;
        case 2:
            displayList(head);
            break;
        case 3:
            if (head == NULL || head->next == NULL)
            {
                printf("List must have at least two nodes to perform the operation.\n");
            }
            else
            {
                printf("Enter the target value: ");
                scanf("%d", &target);
                if (checkMultiplication(head, target))
                {
                    printf("Yes, there exist two nodes whose multiplication is less than %d.\n", target);
                }
                else
                {
                    printf("No, there are no two nodes whose multiplication is less than %d.\n", target);
                }
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
*/