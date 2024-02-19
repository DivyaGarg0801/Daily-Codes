#include <stdio.h>

void multiplyMatrices(int a[][10],
                      int b[][10],
                      int result[][10],
                      int r1, int c1, int r2, int c2) {
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
  }
   }

   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) 
         {
            result[i][j] += a[i][k] * b[k][j];
         }
      }
   }
}

void display(int result[][10], int row, int column) {

   printf("\nOutput Matrix:\n");
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) 
      {
         printf("%d  ", result[i][j]);
      }
      printf("\n");
   }
}

int main() 
{
   int a[10][10],b[10][10],result[10][10], r1, c1, r2, c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
    {
      printf("Error!");
    }
    else
    {
    int i,j;
    for (int i = 0; i <r1; ++i) 
    {
    for (int j = 0; j <c1; ++j) 
    {
         printf("Enter element");
         scanf("%d", &a[i][j]);
    }
    }
    for (int i = 0; i <r2; ++i) 
    {
    for (int j = 0; j <c2; ++j) 
    {
         printf("Enter element");
         scanf("%d", &b[i][j]);
    }
    }
    


   multiplyMatrices(a,b, result, r1, c1, r2, c2);
   display(result, r1, c2);
    }
    return 0;
}
