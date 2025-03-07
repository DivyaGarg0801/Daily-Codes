#include<stdio.h>
struct student
{
    int roll_num,joining_year;
    char name[8],department[15],course[10];   
}c[450];
int main()
{
    printf("*****INPUT*****\n");
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct student c[n];
    for(int i=0;i<n;i++)
    {
        printf("enter roll_num,joining_year,name,department,course:");
        scanf("%d %d %s %s %s",&c[i].roll_num,&c[i].joining_year,c[i].name,c[i].department,c[i].course);
    }  
    int y,r;  
    printf("*****OUTPUT*****\n");
    printf("Enter year:");
    scanf("%d",&y);
    printf("Students who joined in %d are:",y);
    for(int i=0;i<n;i++)
    {
        if (c[i].joining_year==y)
        {
            printf("%s\n",c[i].name);
        }
    }   
    printf("Enter roll number:");
    scanf("%d",&r);
    printf("Student details whose roll number is %d:\n",r);
    for(int i=0;i<n;i++)
    {     
        if (c[i].roll_num==r)
        {
            printf("joining year-%d\nname-%s\ndepartment-%s\ncourse-%s",c[i].joining_year,c[i].name,c[i].department,c[i].course);
        }
    }   
    return 0;
}