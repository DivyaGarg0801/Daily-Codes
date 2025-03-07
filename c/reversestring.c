#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int l,i,count=0;
    gets(a);
    l=strlen(a);
    for (i=0;i<l;i++)
    {
        b[i]=a[l-i-1];
    }
    for (i=0;i<l;i++)
    {
        if (a[i]==b[i])
        count++;
    }
    if (count==l)    
    printf("reversed string==original string");
    else
    printf("not equal");
}