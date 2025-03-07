#include<stdio.h>
int main()
{
    int a,b;
    int *p=&a;
    
    printf("performing operation on pointers \n Enter integer value:");
    scanf("%d",&a);
    printf("%u\n",p);
    p++;
    printf("Increment :%u\n",p);
    p--;
    printf("Decrement :%u",p);
    printf("Enter value for multiply");
    scanf("%d",b);
    int *q=&b;
    int *s;
    *s=*p*(*q);
    printf("%u",*s);
    return 0;
}