#include<stdio.h>
int main()
{
    int n,i,max,min;
    printf("Enter number of elements");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number");
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<n;i++)
    {

        if (a[i]>max)
            max=a[i];
        if (a[i]<min)
            min=a[i];
    }
    printf("min=%d max=%d",min,max);
    return 0;
}