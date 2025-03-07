#include<stdio.h>
int main()
{
    char a[100],ch;
    int m,n;
    FILE *p;
    p=fopen("data.txt",'r');
     if (p == NULL) 
    {
        printf("Error opening file.\n");

    }
    else
    {
        fgets(a,100,p);
        fclose(p);
        scanf(" %d%d %c",&m,&n,&ch);
        for(int i=m;i<n+1;i++)
        {
            if (a[i]==ch)
                printf("%d ",i);
        }

    }
    
    return 0;
}