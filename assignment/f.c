/*Input a N numbers in a cluster ‘A’ and M numbers in another cluster ‘B’ using dynamic 
memory allocation. Print the elements present in both the clusters ‘A’ and ‘B’. Free the 
memory after use.
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,*p,*q,i;
    printf("enter values of m and n");
    scanf("%d",&n);
    scanf("%d",&m);
    p=(int*)calloc(n,sizeof(int));
    q=(int*)malloc(m*sizeof(int));
    if(p==NULL)
    printf("dma is not allocated");
    else
    {
        printf("enter %d values for first cluster",&n);
        for (i=0;i<n;i++)
        {
            scanf("%d",(p+i));
        }        
    }
    if(q==NULL)
    printf("dma is not allocated");
    else
    {
        printf("enter %d values for first cluster",&m);
        for (i=0;i<m;i++)
        {
            scanf("%d",(q+i));
        }        
    }
    free(p);
    free(q);
    return 0;
}