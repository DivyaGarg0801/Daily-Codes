#include <stdio.h> 
  
int main() 
{ 
  
    int i, j, u = 0, m = 3, n = 3, sum = 0;
    int a[3][3] 
        = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; 
    

    if (m == n) { 

        printf("The matrix is \n"); 

        for (i = 0; i < m; ++i) { 
            

            for (j = 0; j < n; ++j) { 
                printf(" %d", a[i][j]); 
            } 
            printf("\n"); 
        } 
        for (i = 0; i < m; ++i) { 

            sum = sum + a[i][i]; 

            u = u + a[i][m - i - 1]; 
        } 

        printf("\nMain diagonal elements sum is = %d\n", sum); 
        printf("Off-diagonal elements sum is = %d\n", u); 
    } 
    else
        printf("not a square matrix\n"); 
    return 0;
}
