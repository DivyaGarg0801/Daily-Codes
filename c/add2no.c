#include<stdio.h>
void ad(int*,int *,int *);
int main()
{
    int a,b,c;
    printf("Input two numbers");
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    int *s=&c;
    ad(p,q,s);
    return 0;
}
void ad(p,q,s)
{
    s=p+q;
    printf("%d",*s);
}