#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    scanf("%s",&a);
    printf("Length using function:%d\n",strlen(a));
    int i;
    for(i=0;a[i]!='\0';i++)
    {
    }
    printf("Length without using function:%d",i);
    return 0;
}