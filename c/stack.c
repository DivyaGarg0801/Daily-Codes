#include <stdio.h>
#define MAX_SIZE 10 
void ENQUEUE(int * stack,int * top)
{
    if (*top>=(MAX_SIZE-1))
    {
        printf("stack overflow,no new value can be added");
    }
    else
    {
        int item;
        printf("enter value of item");
        scanf("%d",&item);
        (*top)++;
        stack[*top]=item;
    }
}
void DEQUEUE(int * stack,int * top)
{
    if(*top==-1)
    {
        printf("queue is empty,underflow");
    }
    else
    {
        (*top)--;
    }
}
void TRAVERSE(int * stack,int * top)
{
    if((*top)==-1)
    {
        printf("queue is empty,underflow");
    }
    else
    {
        for (int i=(*top);i>=0;i--)
        {
            printf("%d",stack[(i)]);
        }
    }
}
int main()
{
    int ch ,stack[MAX_SIZE],top=-1;;
    do
    {
        printf("enter your choice 1.ENQUEUE 2. DEQUEUE 3.TRAVERSE");
        scanf("%d", &ch);
        
        switch (ch)
            {
            case 1:
            {
                ENQUEUE(stack,& top);
                break;
            }
            case 2:
            {
                DEQUEUE(stack,& top);
                break;
            }
            case 3:
            {
                TRAVERSE(stack,& top);
                break;
            }
            case 4:
                break;
            }
    }while(ch<4);
    return 0;
}
/*
#include <stdio.h>

#define MAX_SIZE 10  // Defining a macro

int main() {
    printf("The maximum size is: %d\n", MAX_SIZE);
    return 0;
}
*/