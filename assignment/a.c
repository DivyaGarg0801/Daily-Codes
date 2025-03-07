// second maximum and secong minimum

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    scanf("%d",&n);

    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    printf("dma is not allocated");
    else
    {
        int i,j;
        for (i=0;i<n;i++)
        {
            scanf("%d",(p+i));
        }
        
        int t;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if( *(p+i)>*(p+j))
                {
                    t=*(p+i);
                    *(p+i)=*(p+j);
                    *(p+j)=t;
                }
            }
        }
        printf("second minimum:%d\n",*(p+1));
        printf("second maximum:%d",*(p+(n-2)));
    }
    free(p);
    return 0;
}
