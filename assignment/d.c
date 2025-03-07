//Allocate memory for ‘N’ integers and change the size of allocated memory for ‘M’ integers 
//where ‘M’ can be less or more than ‘N’.
#include<stdio.h>
#include<stdlib.h>
int  main()
{
    int *p,m,n,i;
    printf("Enter value for n:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("enter value of m:");
    scanf("%d",&m);
    p=(int *)realloc(p,m*sizeof(int));
    if(p==NULL)
    printf("dma is not allocated");
    else
    {
        if (m>n) 
        {
            printf("Enter additional %d integers:\n", m-n);
            for (i = n; i < m; i++) 
            {
                scanf("%d", (p+i));
            }
        }
        for (i=0;i<m;i++)
        {
            printf("%d\n",*(p+i));
        }        
    }
}