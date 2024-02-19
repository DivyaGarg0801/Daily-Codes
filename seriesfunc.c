#include <stdio.h>
int fact(int);
void main()
{
    int i,n,sum=0;
    printf("Function : find the sum of 1!/1+2!/2+3!/3+....n!/n :\n");
    printf("Enter number of elements");
    scanf("%d",&n);
    for(i=1;i<n+1;i++) 
    sum=sum+fact(i)/i;
    printf("The sum of the series is : %d",sum);
}

int fact(int n)
    {
        int f=1;
        while(n>0)
        {
            f =f*n;
            n--;
        }
    return f;
    }