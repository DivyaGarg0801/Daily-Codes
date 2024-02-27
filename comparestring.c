#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i,count;
    printf("Enter string 1 and string 2");
    gets(a);
    gets(b);
    int l1=strlen(a);
    int l2=strlen(b);
    if (l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            if (a[i]==b[i])
            count++;
        }
        if (count==l1)
        printf("Two strings are equal");
        else
        printf("Two strings are not equal");
    }
    else
    printf("Length of two string are not equal");
    return 0;
}