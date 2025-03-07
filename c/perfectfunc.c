#include <stdio.h>
 
int checkPerfect(int n1);
int main()
{
    int n1,a;
    printf(" Input any number: ");
    scanf("%d", &n1);
    a=checkPerfect(n1);
    if(a)
    {
        printf(" The %d is a perfect number.\n", n1);
    }
    else
    {
        printf(" The %d is not a perfect number.\n", n1);
    }
    return 0;
}
int checkPerfect(int n1) 
{
    int i, sum, num;
    sum = 0;
    num = n1;
    for(i=1; i<num; i++)  
    {  
        if(num%i == 0)  
        {  
            sum += i;  
        }  
    }
    return (n1==sum);
}

    
