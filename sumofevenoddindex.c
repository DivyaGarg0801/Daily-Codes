#include<stdio.h>
int main()
{
    int n,i,sumo=0,sume=0;
    printf("Enter number of elements");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number");
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<n;i+2)
    {

        sumo=sumo+a[i];
    }
    for(i=0;i<n;i+2)
    {

        sume=sume+a[i];
    }
    printf("sum of odd =%d even=%d",sumo,sume);
    return 0;
}