/*
//SIMPLE QUEUE IMPLEMENTATION
#include <stdio.h>
#define MAX_SIZE 5
void ENQUEUE(int * queue,int * front,int * rear)
{
    if (*rear>=(MAX_SIZE-1))
    {
        printf("stack overflow,no new value can be added");
    }
    else
    {
        int item;
        printf("enter value of item");
        scanf("%d",&item);
        if ((*front)==-1)
        {
             *front=0; 
        }
        (*rear)++;
        queue[*rear]=item;

    }
}
void DEQUEUE(int * queue,int * rear,int * front)
{
    if(*rear==-1)
    {
        printf("queue is empty,underflow");
    }
    else if (*front == *rear)
    {
        *front=*rear=-1;
    }
    else
    {
        printf("deleted item is %d",queue[*front]);
        (*front)++;
    }
}
void TRAVERSE(int * queue,int * front,int *rear)
{
    if((*rear)==-1)
    {
        printf("queue is empty,underflow");
    }
    else
    {
        for (int i=(*front);i<=(*rear);i++)
        {
            printf("%d",queue[(i)]);
        }
    }
}
int main()
{
    int ch ,queue[MAX_SIZE],front=-1,rear=-1;
    do
    {
        printf("enter your choice 1.ENQUEUE(insertion at rear) 2. DEQUEUE(deletion from front) 3.TRAVERSE");
        scanf("%d", &ch);

        switch (ch)
            {
            case 1:
            {
                ENQUEUE(queue,&front,&rear);
                break;
            }
            case 2:
            {
                DEQUEUE(queue,& rear,& front );
                break;
            }
            case 3:
            {
                TRAVERSE(queue,& front,&rear);
                break;
            }
            case 4:
                break;
            }
    }while(ch<4);
    return 0;
}

*/
// CIRCULAR QUEUE IMPLEMENTATION
#include <stdio.h>
#define max 5
void enqueue(int *queue, int *front, int *rear)
{
    if (*front == (*rear + 1) % max)
    {
        printf("queue is full");
    }
    else
    {
        int item;
        printf("enter value of item");
        scanf("%d", &item);
        if (*rear == -1)
        {
            *front = *rear = 0;
        }
        else
        {
            *rear = (*rear + 1) % max;
        }
        queue[*rear] = item;
    }
}
void dequeue(int *queue, int *front, int *rear)
{
    if (*rear == -1)
    {
        printf("queue is empty,underflow");
    }
    else if (*front == *rear)
    {
        *front = *rear = -1;
    }
    else
    {
        printf("deleted item is %d", queue[*front]);
        (*front) = (*front + 1) % max;
    }
}
void traverse(int *queue, int *front, int *rear)
{
    if ((*rear) == -1)
    {
        printf("queue is empty \n");
    }
    else
    {
        for (int i = (*front); i != (*rear) + 1; i = (i + 1) % max)
        {
            printf("%d", queue[i]);
        }
    }
}
int main()
{
    int ch, queue[max], front = -1, rear = -1;

    do
    {
        printf("enter your choice 1.ENQUEUE(insertion at rear) 2. DEQUEUE(deletion from front) 3.TRAVERSE");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue(queue, &front, &rear);
            break;
        case 2:
            dequeue(queue, &front, &rear);
            break;
        case 3:
            traverse(queue, &front, &rear);
            break;
        case 4:
            break;
        }
    } while (ch < 4);
}
