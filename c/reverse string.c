#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],t;
    scanf("%s",a);;
    int i,len;
    len=strlen(a);
    for(i=0;i<len/2;i++)
    {
        t=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=t;
    }
    for(i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}