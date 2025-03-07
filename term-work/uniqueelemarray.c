#include<stdio.h>
int main()
{
    char a[50];
    int i,j,n,c;
    printf("Print all unique elements of an array:");
    printf(" \n-------------------------------------");
    printf("\nInput the number of elements to be stored in the array:");
    scanf("%d",&n);
    printf("Input %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter element-%d:",i);
        scanf(" %c",&a[i]);
    }
    printf("The unique elements found in the array are: ");
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                c++;
                a[j]=-1;
            }
        }
        if(c==0)
        {
            printf("%c ",a[i]);
        }
    }
    return 0;           
}
