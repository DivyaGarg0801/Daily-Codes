#include<stdio.h>
int main()
{
    int i,a[50],n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    printf("Input %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element:");
        scanf("%d",&a[i]);
    }
    printf("The Even elements are: ");
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0)
        printf("%d ",a[i]);
    }
    printf("\nThe Odd elements are: ");
    for(i=0;i<n;i++)
    {
        if (a[i]%2!=0)
        printf("%d ",a[i]);
    }
}