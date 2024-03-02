#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],t;
    printf("Enter a string :");
    gets(a);
    int l,ch,i,j;
    l=strlen(a);
    printf("Enter 1 for ascending and enter 2 for descending :");
    scanf("%d",&ch);
    if (ch==1)
    {
            for (i=0;i<l-1;i++)
            {
                for(j=i+1;j<l;j++)
                {
                    if (a[i]>a[j])
                    {
                        t=a[j];
                        a[j]=a[i];
                        a[i]=t;
                    }
                }
            }
        for(i=0;i<l;i++)
        {
            printf("%c",a[i]);
        }
    }
    else if(ch==2)
    {
        for(i=0;i<l-1;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if (a[i]<a[j])
                {
                    t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                }
            }
        }
    for(i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
    }
    else
    printf("Wrong choice entered");
    return 0;

}