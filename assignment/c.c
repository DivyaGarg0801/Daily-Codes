//Input a N numbers in a cluster ‘A’ and M numbers in another cluster ‘B’ using dynamic 
//memory allocation. Print the elements present in cluster ‘A’ but not in cluster ‘B’.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,*p,*q,*r,i,j;
    printf("enter values of m and n");
    scanf("%d",&n);
    scanf("%d",&m);
    p=(int*)calloc(n,sizeof(int));
    q=(int*)malloc(m*sizeof(int));
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
    {
        printf("dma is not allocated");
        return -1;
    }
    else
    {
        for (i=0;i<m;i++)
        {
            scanf("%d",(q+i));
        }        
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<m;j++)
        {
            if (*(p+i)==*(q+j))
            {
                c++;
                break;
            }   
        }
        if (c==0)
        {
            printf("%d",*(p+i));
        }
    }
    free(p);
    free(q);
    return 0;
}