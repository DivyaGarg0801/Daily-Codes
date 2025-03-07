#include<stdio.h>
int main()
{
    int a;
    int *p=&a;
    float b;
    float *q=&b;
    char c;
    char *r=&c;
    double d;
    double *s=&d;
//    long int e,*t=&e;
    printf("Enter values:");
//    scanf("%d %f %c %lf %d",&a,&b,&c,&d,&e);
    scanf("%d %f %c %d",&a,&b,&c,&d);
    printf("%d %p %p %d \n",a,&a,p,*p);
    printf("%f %p %p %f \n",b,&b,q,*q);
    printf("%c %p %p %c \n",c,&c,r,*r);
    printf("%lf %p %u %lf \n",d,&d,s,*s);
//    printf("%d %p %u %d \n",e,&e,t,*t);
    return 0;
}