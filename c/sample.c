#include<stdio.h>
int main()
{
    int i,n,m,flag=0,d=0,f=0,s;
    scanf("%d %d", &n,&m);
    int a[n],b[m],c[m+n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("union of two arrays");
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<m;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                flag=1;
            }
        }
        if (flag==0)
        {
            c[n+d]=b[i];
            d++;

        }
    }
    for(i=0;i<(m+d-1);i++)
    {
        printf("%d ",c[i]);
    }
    s = (n < m) ? n : m;
    int e[s];
    printf("\nIntersection of two arrays");
    for(i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (a[i]==b[j])
            {
                e[f]=a[i];
                f++;
                break;
            }
        }
    }
    for(i=0;i<f;i++)
    {
        printf("%d ",e[i]);
    }
    return 0;
}