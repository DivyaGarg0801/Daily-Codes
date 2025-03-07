#include <stdio.h>

int main() 
{
char a[50],b[50],c[50];
scanf("%s",a);
printf("%d",sizeof(a));
gets(b);
printf("%d",sizeof(b));
fgets(c,50,stdin);
printf("%d",sizeof(c));
}