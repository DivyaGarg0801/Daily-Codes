#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    printf("Enter number of blocks");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if (p==NULL)
    {
        printf("dma is not allowed");
    }
    else
    {
        int i,c1=0,c2=0;
        for (i=0;i<n;i++)
        {
            scanf("%d",*(p+i));
            if (*(p+i)%2==0)
                c1++;
            else
                c2++;
        }
        printf("%d,%d",c1,c2);
        free(p);
        return 0;
    }
}