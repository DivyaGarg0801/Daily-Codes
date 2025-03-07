#include<stdio.h>
int main()
{
    int n,i,sumo = 0,sume = 0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
   
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d",&a[i]);
    }
    
    for(i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            sume=sume+a[i];
        }
        else 
        {
            sumo=sumo+a[i];
        }
    }
    printf("sum of even = %d, sum of odd = %d",sume, sumo);
    return 0;
}