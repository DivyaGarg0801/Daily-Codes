#include <stdio.h> 
  
int main() 
{ 
  
    int i, j, u = 0, m, n, sum = 0;
    printf("Enter number of rows");
    scanf("%d",&m);
    printf("Enter number of columns");
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if (m == n) 
    { 
        for (i = 0; i < m; ++i) 
        { 
            sum = sum + a[i][i]; 
            u = u + a[i][m - i - 1]; 
        } 

        printf("\nMain diagonal elements sum is = %d\n", sum); 
        printf("Off-diagonal elements sum is = %d\n",u ); 
    } 
    else
        printf("not a square matrix\n"); 
    return 0;
}
