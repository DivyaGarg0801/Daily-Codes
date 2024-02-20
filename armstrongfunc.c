#include <stdio.h>
 
int checkArmstrong(int n1);
int main()
{
    int n1;
    printf(" Input any number: ");
    scanf("%d", &n1);
    if(checkArmstrong(n1))
    {
        printf(" The %d is an Armstrong number.\n", n1);
    }
    else
    {
        printf(" The %d is not an Armstrong number.\n", n1);
    }
    return 0;
}
int checkArmstrong(int n1) 
{
    int n2,ld, sum=0,num,len=0,i;
    num=n1;
    n2=n1;
    while(n1>0)  
    {  
        ld = n1% 10;  
        len++;
        n1=n1/10;        
    }
    while(num>0)
    {
        ld=num%10;
        int a=1;
        for(i=0;i<len;i++)
        {
            a=a*ld;
        }
        sum=sum+a;
        num=num/10;
    }
    
    return (n2==sum);
}

    
