#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*p;
    printf("enter number of block gto be allocated");
    scanf("%d",&n);
    printf("%d",sizeof(int));
    p=(int *) malloc(n* sizeof(int));
    if (p== NULL)
    {
        printf("memory is not allocated");
    }
    else
    {
        for(i=0;i<n;i++)
            scanf("%d",(p+i));
        for(i=0;i<n;i++)
            printf("%d",*(p+i));
    }
    return 0;
}