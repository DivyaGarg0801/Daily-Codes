//Input a N sorted numbers in a cluster ‘A’ and M sorted numbers in another cluster ‘B’ using 
//dynamic memory allocation. Merge the elements present in cluster ‘A’ and cluster ‘B’
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,*p,*q,*r,i;
    printf("enter values of m and n");
    scanf("%d",&n);
    scanf("%d",&m);
    p=(int*)calloc(n,sizeof(int));
    q=(int*)malloc(m*sizeof(int));
    r=(int*)malloc((m+n)*sizeof(int));
    if(p==NULL)
    printf("dma is not allocated");
    else
    {
        for (i=0;i<n;i++)
        {
            scanf("%d",(p+i));
        }        
    }
    if(q==NULL)
    printf("dma is not allocated");
    else
    {
        for (i=0;i<m;i++)
        {
            scanf("%d",(q+i));
        }        
    }
    for(i=0;i<n;i++)
    {
        *(r+i)=*(p+i);
    }
    for(i=0;i<m;i++)
    {
        *(r+(n+i))=*(q+i);
    }
    for(i=0;i<n+m;i++)
    {
        printf("%d",*(r+i));
    }
    free(p);
    free(q);
    free(r);
    return 0;
}