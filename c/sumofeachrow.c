#include <stdio.h>

int main()
{
    int m,n;       
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&m,&n);    
    int arr[m][n];   
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++)     
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<m;i++)   
    {
        int rsum=0;
        for(int j=0;j<n;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }

    for(int i=0;i<m;i++)
    {
        int csum=0;
        for(int j=0;j<n;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,csum);
    }
    return 0;
}