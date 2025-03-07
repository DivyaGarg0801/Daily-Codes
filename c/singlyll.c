#include <stdio.h>
#include <stdlib.h>
struct snode
{
    int info;
    struct snode *next;
};
/*
struct snode * insertitem(struct snode *head)
{
    struct snode *temp, *p1;
    temp = (struct snode *)malloc(sizeof(struct snode));
    if (temp == NULL)
        printf("memory not allocated");
    else
    {
        p1 = head;
        printf("enter value for item");
        int item;
        scanf("%d", &item);
        while (p1->info != item)
        {
            p1 = p1->next;
        }
        temp->next = p1->next;
        printf("enter value of node");
        scanf("%d", &temp->info);
        p1->next = temp;
    }
    p1 = head;
    while (p1 != NULL)
    {
        printf("%d", p1->info);
        p1 = p1->next;
    }
    return head;
*/    
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
        printf("enter value for item");
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
void PrintReverse(struct snode *head)
{
    struct snode *p1 = head;
    if (p1 == NULL)
    {
        return;
    }
    else
    {
        PrintReverse(p1->next);
        printf("%d", p1->info);
    }
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
struct snode * rotate(struct snode * head)
{
    struct snode * p1=head ;
    int k,len=1;
    printf("enter number of rotations");
    scanf("%d",&k);
    while(p1->next!=NULL)
    {
        p1=p1->next;
        len++;
    }
    p1->next=head;
    p1=p1->next;
    k=k%len;
    for(int i=0;i<(k-1);i++)
    {
        p1=p1->next;
    }
    head=p1->next;
    p1->next=NULL;
    return head;
}
int main()
{
    int ch;
    struct snode *head = NULL;

    do
    {
        printf("enter your choice 1. insert 2. print reverse 3. reverse 4. print 5. rotate ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head=insertatfront(head);
            break;
        case 2:
            PrintReverse(head);
            break;
        case 3:
            head=reverse(head);
            break;
        case 4:
            print(head);
            break;
        case 5:
            head=rotate(head);
            break;
        default:
            break;
        }
    } while (ch<5 );
    return 0;
}