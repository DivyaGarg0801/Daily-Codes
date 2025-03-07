#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("Enter string 1 and string 2");
    gets(a);
    gets(b);
    int l1=strlen(a);
    int l2=strlen(b);
    char c[l1+l2];
    int i;
    for(i=0;i<l1;i++)
    c[i]=a[i];
    for(i=0;i<l2;i++)
    c[l1+i]=b[i];
    printf("Merged strings:");
    for(i=0;i<(l1+l2);i++)
    printf("%c",c[i]);
}