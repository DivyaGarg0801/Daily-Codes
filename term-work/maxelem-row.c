#include <stdio.h> 
  
int main() 
{ 
  
    int i, j, m, n;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
    int a[m][n],b[m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The inputted array is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        int max=0;
        for(j=0;j<n;j++)
        {
            if (a[i][j]>max)
            {
                max=a[i][j];
            }
        }
        b[i]=max;
    }
    printf("The maximum element of each row of matrix are:"); 
    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
