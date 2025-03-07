/*Write a function in C that takes a string (represented as a pointer to its first character) as input and returns its length.*/
#include<stdio.h>
void replace(char *p)
{
    int i,l=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        l++;
    }
    printf("%d",l-1);
};
int main()
{
    char str[100];
    printf("Enter a string");
    fgets(str,100,stdin);
    replace(str);
    return 0;
}