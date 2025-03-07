#include<stdio.h>
#include<string.h>
int  main()
{
    char a[100];
    int i,j;
    printf("Enter a string:");
    fgets(a,sizeof(a),stdin);
    printf("")
    for(i=0;a[i]!='\0';i++)
    {
        int c=0;
        for(j=i ; a[j]!=' '&& a[j]!='\0' ; j++)
        {
            printf("%c",a[j]);
            c++;
        }
        i=i+c;
        printf("\n");
    }
    return 0;
}