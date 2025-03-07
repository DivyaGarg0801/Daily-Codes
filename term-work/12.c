#include<stdio.h>
#include<string.h>
int main()
{
    FILE *p,*q,*r;
    p=fopen("Data.txt","w+");
    q=fopen("prime.txt","w+");
    r=fopen("nonprime.txt","w+");
    int i,num;
    if (p==NULL || q==NULL)
        printf("Error");
    else
    {
        printf("*****INPUT*****\n");
        printf("Enter 20 integers:\n");
        for(i=0;i<20;i++)
        {
            scanf("%d",&num);
            putw(num,p);
        }
        rewind(p);
        while ((num=getw(p)) != EOF) 
        {
            int c=0;
            for(i=2;i<=num/2;i++)
            {
                if (num%i==0)
                {
                    c++;
                    break;
                }
            }
            if (c==0)
                putw(num,q);
            else
                putw(num,r);
        }
        rewind(p);
        rewind(q);
        rewind(r);
        printf("*****OUTPUT*****\n");
        printf("Content of file Data.txt:\n");
        while ((num=getw(p)) != EOF) 
        {
            printf("%d ",num);
        }
        printf("\nContent of file prime.txt:\n");
        while ((num=getw(q)) != EOF) 
        {
            printf("%d ",num);
        }
        printf("\nContent of file nonprime.txt:\n");
        while ((num=getw(r)) != EOF) 
        {
            printf("%d ",num);
        }
    }
    fclose(p);
    fclose(q);
    fclose(r);
    return 0;
}