// C Program to insert the node at the beginning of
// Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *prev, *next;
};

struct Node *insertAtFront(struct Node *head)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("memory not available");
        return head;
    }
    else
    {
        printf("enter info");
        scanf("%d", &temp->info);
        if (head == NULL)
        {
            temp->prev = temp;
            temp->next = temp;
            head = temp;
        }
        else
        {
            struct Node *p1 = head;
            temp->prev = p1->prev;
            temp->next = p1;
            p1->prev->next = temp;
            p1->prev = temp;

            head = temp;
        }
        return head;
    }
}

void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *p1 = head;
    do
    {
        printf("%d ", p1->info);
        p1 = p1->next;
    } while (p1 != head);
    printf("\n");
}

/*
struct Node * deletenthnodefromlast(struct Node * head)
{
    struct Node *p1=head,*p2;
    int k=0,n;
    scanf("%d",&n);
    while(p1!=NULL)
    {

        p1=p1->next;
        k++;
    }
    printf("%d",k);
    p1=head;
    if(n>k)
        printf("deletion not possible");
    else
    {
        for(int i=0;i<(k-n-1);i++)
        {
            p1=p1->next;
        }
        p2=p1->next;
        p1->next=p2->next;
        free(p2);
    }

}
*/
struct Node *insertatgivenpos(struct Node *head)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
        printf("memory not available");
    else
    {
        struct Node *p1 = head;
        int n = 0, p;
        do
        {
            p1 = p1->next;
            n++;
        } while (p1 != head);
        printf("enter position");
        scanf("%d", &p);
        p1 = head;
        if (n >= p)
        {
            printf("enter info");
            scanf("%d", &temp->info);
            if (p1 == NULL)
            {
                temp->prev = NULL;
                temp->next = temp;
                head = temp;
            }

            else
            {
                int i;
                if (p == 1)
                {
                    temp->prev = p1->prev;
                    temp->next = p1;
                    p1->prev->next = temp;
                    p1->prev = temp;
                    head=temp;
                }
                else
                {
                    for (i = 0; i < (p - 2); i++)
                        p1 = p1->next;
                    temp->prev = p1;
                    temp->next = p1->next;
                    p1->next->prev = temp;
                    p1->next = temp;
                }
            }
            return head;
        }
        else
        {
            printf("insertion not possible");
        }
    }
}

int main()
{
    struct Node *head = NULL;
    /*
    head = insertAtFront(head);
    head = insertAtFront(head);
    */
    head = insertAtFront(head);
    head = insertAtFront(head);
    head = insertAtFront(head);
    printList(head);
    head = insertAtFront(head);
    printList(head);
    head = insertatgivenpos(head);
    printList(head);

    return 0;
}
