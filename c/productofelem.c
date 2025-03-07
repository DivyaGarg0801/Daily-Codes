#include<stdio.h>
int main()
{
    int n,prod=1,i;
    printf("Enter number of array elements");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&a[i]);
        prod=prod*a[i];
    }
    printf("%d",prod);
    return 0;
}