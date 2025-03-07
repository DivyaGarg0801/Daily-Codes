#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Enter number of rows of square matrix:");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The elements being summed of the lower triangular matrix are:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (i>j)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nThe Sum of the lower triangular Matrix Elements is: %d ",sum);
    return 0;
}