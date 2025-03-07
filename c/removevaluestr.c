#include<stdio.h>
#include<string.h>
int main()
{
char a[50], elem,b[0];
int count,l,i,t,in,j;
printf("Enter a string :");
gets(a);
l=strlen(a);
printf("Enter element to be deleted :");
scanf("%c",&elem);
for(i=0; a[i]!= '\0';i++)
{
    if(a[i]==elem)
    {
        j=i;
        break;
    }
}
for(i=0; a[i]!= '\0'; i++)
{ 
    if(a[i]==elem)
    {
        count++;
    }
}
if (count>0)
{
if (count>1)
{
printf("Element is found at index :");
for(i=0; a[i]!='\0';i++)
{
    if(a[i]==elem)
    {
        printf("%d\t",i);
    }
}
printf("\nEnter index :");
scanf("%d",&in);
for(i=0; i<in;i++)
{
    b[i]=a[i];
}
for(i=in;i<l;i++)
{
    b[i]=a[i+1];
}
}
else
{
    for(i=0;i<j;i++)
    {
        b[i]=a[i];
    }
    for(i=j;i<l;i++)
    {
        b[i]=a[i+1];
    }
}
for(i=0;i<l;i++)
{
    printf("%c",b[i]);
}
}
else
printf("element does not exist");
return 0;
}