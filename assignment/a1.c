/*You are given a structure Date to represent a date with members day, month, and year. Write a C program that checks whether a given date exists */
#include<stdio.h>
struct date
{
    int dt,month,year;
};
int c=0;
void month(struct date date)
{
    int c=0;
        if(date.year<1 || date.year>9999)
        {
            printf("not a valid date");
            c++;
        }
    
        else if (date.month>0 && date.month<13)
        {
            if (date.month==1||date.month==3||date.month==5||date.month==7||date.month==8||date.month==10||date.month==12)
            {
                if(date.dt<1 || date.dt>31) 
                {
                printf("not a valid date");
                c++;
                }
                
            }
            else if (date.month==4||date.month==6||date.month==9||date.month==11)
            {
                if(date.dt<1 || date.dt>30)
                {   
                    printf("not a valid date");
                    c++;
                }
            }
            else
            {
                if (date.year%4==0 && date.year%100!=0)
                {
                    if (date.dt<1 || date.dt>29)
                    {   
                        printf("not a valid date");
                        c++;
                    }
                }
                else
                {
                    if (date.dt<1 || date.dt>28)
                    {
                        printf("not a valid date");
                        c++;
                    }
                }
            }
        }
        else
        {
            printf("not a valid month");
            c++;
        }
    if (c==0)
    {
        printf("valid date");
    }
    
}
int main()
{
    printf("enter date,month,year");
    struct date date;
    scanf("%d",&date.dt);
    scanf("%d",&date.month);
    scanf("%d",&date.year);
    month(date);
}
