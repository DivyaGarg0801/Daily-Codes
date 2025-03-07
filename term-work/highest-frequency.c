#include<stdio.h>
int main()
{
    char a[100],elem,count[256]={0};
    int i,j,n,max=0;
    printf("Enter a string:");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        count[a[i]]++;
    }
        for(i=0;i<256;i++)
        {
            if(i!=' ')
            {
                if (count[i]>max)
                {
                    max=count[i];
                    elem=i;
                }
            }
        }    
    printf("Highest frequency character that appears in a string is %c",elem);
    return 0;           
}
