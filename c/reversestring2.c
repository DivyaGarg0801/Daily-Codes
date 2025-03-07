#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    fgets(a,sizeof(a),stdin);
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {
        while (a[i]==' ')
        {
            printf(" ");
            i++;
        }
        if (a[i]=='\0')
        break;
        
        int c=0,t;
        for(j=0;a[j+i]!=' ' && a[j+i]!='\0';j++)
        {
            b[j]=a[j+i];
            c++;
        }    
        for (j=0;j<c/2;j++)
        {
            t=b[j];
            b[j]=b[c-j-1];
            b[c-j-1]=t;
        }
        b[c]='\0';
        printf("%s ",b);
        i=i+j-1;
    }
    return 0;
}