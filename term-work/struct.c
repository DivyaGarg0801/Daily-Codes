#include<stdio.h>
struct car
{
    int car_id,rental_rate;
    char model[8];   
};
int main()
{
    printf("*****INPUT*****\n");
    int n;
    printf("Enter number of cars:");
    scanf("%d",&n);
    struct car c[n];
    for(int i=0;i<n;i++)
    {
        printf("enter car id ,model and rental rate per day:");
        scanf("%d %s %d",&c[i].car_id,c[i].model,&c[i].rental_rate);
    }  
    int nd;  
    printf("Enter number of days:");
    scanf("%d",&nd);
    printf("*****OUTPUT*****\n");
    printf("For %d days:\n",nd);
    for(int i=0;i<n;i++)
    {
        int a=c[i].rental_rate*nd;
        printf("%d will cost %d\n",c[i].car_id,a);
    }    
    return 0;
}