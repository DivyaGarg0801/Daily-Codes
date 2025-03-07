#include<stdio.h>
int main()
{
    int a[3][3], i, j, min;
    printf("Enter any 3*3 matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);
    }
    min = a[0][0];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(min>a[i][j])
                min= a[i][j];
        }
    }
    printf("Smallest Element = %d", min);
    return 0;
}