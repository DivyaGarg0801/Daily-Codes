#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[50];
    int i;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
    printf("%c",tolower(a[i]));
    }
    printf("\n");
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&& a[i]<='Z')
            printf("%c",a[i]+32);
        else
            printf("%c",a[i]);
    }
    return 0;
}