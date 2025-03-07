#include<stdio.h>
#include<stdlib.h>
struct snode
{
    int data;
    struct snode* next;
};
struct snode *insertatbeg(struct snode * head)
{
    struct snode *temp;
    temp=(struct snode*)malloc(sizeof(struct snode));
    if(temp==NULL)
    {
        printf("Memory not allocated");
        return head;
    }
    printf("enter info");
    scanf("%d",&temp->data);
    if (head==NULL)/*underflow checking*/
    {
        temp->next=NULL;
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
    return head;
}
int main()
{
    struct snode *head=NULL;
    insertatbeg(head);
    insertatbeg(head);
    insertatbeg(head);10
    insertatbeg(head);
    return 0;
}