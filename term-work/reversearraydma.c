#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,in,t,j;
    printf("*****INTPUT*****\n");
    printf("enter value of n:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    printf("dma is not allocated");
    else
    {
        for (i=0;i<n;i++)
        {
            scanf("%d",(p+i));
        }        
    }
    printf("Enter starting index for printing of reversed array:");
    scanf("%d",&in);
    for(i=in,j=n-1;i<(n+in)/2;i++,j--)
    {
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
    }
    printf("*****OUTPUT*****\n");
    for(i=in;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    return 0;
}