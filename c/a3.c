
#include<stdio.h>
int main()
{
    int comparisons=0,swaps=0;
    int n;
    printf("enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            comparisons++;
            if (arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        if (minindex!=i)
        {
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
            swaps++;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("comparisons - %d",comparisons);
    printf("swaps - %d",swaps);
}