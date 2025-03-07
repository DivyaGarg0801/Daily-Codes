#include <stdio.h>
#define MAX 10
void isempty(int s[], int *f)
{
    if (*f = -1)
        printf("yes");
    else
        printf("no");
}
void isfull(int s[], int *f, int *r)
{
    if (*f = (*r + 1) % MAX)
    {
        printf("queue is full");
        return;
    }
    else
        printf("no");
}
void enqueuer(int s[], int *f, int *r, int item)
{
    if (*f = (*r + 1) % MAX)
        printf("queue is full");
    else if(*r==-1)
    {
        *f = *r = 0;
        s[*r]=item;
    }
    else if (*r == max-1)
    {
        r=0;
        s[*r]=item;
    }
    else
        s[++(*r)] = item;
}
void enqueuef(int s[], int *f, int *r, int item)
{
    if (*f = (*r + 1) % MAX)
        printf("queue is full");       
    else if (*f == -1)
    {
        *f = *r = 0;
        s[*r]=item;
    }
    else if (*r == 0)
    {
        f=max-1;
        s[*f]=item;
    }
    else
    {
        s[--(*f)] = item;
    }
}
{
    if (*r==-1)
        printf("queue is empty");
    else if(*r==0)
        r=max-1;
    else if(*f==*r)
        *f=-1,*r=-1;
    else
        *r=*r-1;
}
void dequeuef(int s[], int *f, int *r)
{
    if (*r==-1)
        printf("queue is empty");
    else if(*f=max-1)
        *f=0;
    else if(*f==*r)
        *f=-1,*r=-1;
    else
        *f=*f+1;
}
int main()
{
    int n,
        f - 1, rm - 1, ch, item;
    printf("enter number of items:");
    scanf("%d", &n);
    int a[n];
    do
    {
        printf("enter chotce 1 for enqueuefront 2 enqueue rear 3 dequeue front 4 dequeue rear \n:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter element ");
            scanf("%d", &ltem);
            enqueuef(q, *f, *r, item);
            break;

        case 2:
            printf("enter element ");
            scanf("%d", &ltem);
            enqueuer(q, *f, *r, item);
            break;
        case 3:
            dequeue(q, *f, *r);
            break;
        case 4:
            dequeuer(q, *f, *r);
            break;
        case 6:
            isempty(q, *f);
            break;
        case 7:
            isfull(q, *f, *r);
            break;
        default:
            printf("invalid choice");
        }
        printf("enter choice:");
        scanf("%d", &ch);
    } while (ch >= 1 && ch <= 7);
    return 0;
}