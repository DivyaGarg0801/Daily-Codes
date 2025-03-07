#include <stdio.h>
#define STk_SIZE 10
void ENQUEUE(int * stack,int * top,int STK_SIZE)
{
    if (*top>=(STK_SIZE-1))
    {
        printf("stack overflow,no new value can be added");
    }
    else
    {
        int item;
        printf("enter value of item");
        scanf("%d",&item);
        stack[++(*top)]=item;
    }
}
void DEQUEUE(int * stack,int top)
{

}
void TRAVERSE(int * stack,int top)
{

}
int main()
{
    int ch ,stack[STk_SIZE],top=-1;;
    do
    {
        printf("enter your choice 1.ENQUEUE 2. DEQUEUE 3.TRAVERSE");
        scanf("%d", &ch);
        
        switch (ch)
            {
            case 1:
            {
                ENQUEUE(stack,& top,#include <stdio.h>
#define STk_SIZE 10
void ENQUEUE(int * stack,int * top,int STK_SIZE)
{
    if (*top>=(STK_SIZE-1))
    {
        printf("stack overflow,no new value can be added");
    }
    else
    {
        int item;
        printf("enter value of item");
        scanf("%d",&item);
        stack[++(*top)]=item;
    }
}
void DEQUEUE(int * stack,int top)
{

}
void TRAVERSE(int * stack,int top)
{

}
int main()
{
    int ch ,stack[STk_SIZE],top=-1;;
    do
    {
        printf("enter your choice 1.ENQUEUE 2. DEQUEUE 3.TRAVERSE");
        scanf("%d", &ch);
        
        switch (ch)
            {
            case 1:
            {
                ENQUEUE(stack,& top,STK_SIZE);
                break;
            }
            case 2:
            {
                DEQUEUE(stack,top);
                break;
            }
            case 3:
            {
                TRAVERSE(stack,top);
                break;
            }
            case 4:
                break;
            }
    }while(ch<4);
    return 0;
});
                break;
            }
            case 2:
            {
                DEQUEUE(stack,top);
                break;
            }
            case 3:
            {
                TRAVERSE(stack,top);
                break;
            }
            case 4:
                break;
            }
    }while(ch<4);
    return 0;
}