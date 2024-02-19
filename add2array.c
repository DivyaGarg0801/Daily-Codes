#include<stdio.h>
int main()
{
    int m,n,i,l,s;
    printf("Enter number of elements for array1 :");
    scanf("%d",&m);
    printf("Enter number of elements for array2 :");
    scanf("%d",&n);
    int a[m], b[n];
    printf("Enter elements for array1 :");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements for array2 :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    if (n>m)
    {
        l=n;
        s=m;
    }
    else
    {
        l=m;
        s=n;
    }
    int c[l];
    for(i=0;i<s;i++)
    {
        c[i]=a[i]+b[i];
    }
    if (n>m)
    {
        for(i=s;i<l;i++)
            c[i]=b[i];
    }
    else
    {
        for(i=s;i<l;i++)
            c[i]=a[i];
    }
    for(i=0;i<l;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}