#include<stdio.h>
int main()
{
    char a[50],b[50];
    int i,j,n,s,found,c=0;
    printf("Print all unique elements of an array:");
    printf(" \n-------------------------------------");
    printf("\nInput the number of elements to be stored in the array:");
    scanf("%d",&n);
    printf("Input %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter element-%d:",i);
        scanf(" %c",&a[i]);
        s=sizeof(b);
        for(j=0;j<s;j++)
        {
            found=0;
            if (a[i]==b[j])
            {
                found=1;
                break;
            }
        }
        if (found==0)
        {
            b[c]=a[i];
            c++;
        }       
    }
    printf("The unique elements found in the array are: ");
    for(i=0;i<c;i++)
    {
        printf("%c ",b[i]);
    }
    return 0;    
}