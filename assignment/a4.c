#include<stdio.h>
struct car
{
    int room_no,rental_rate;
    char type[8];   
};
int main()
{
    int n;
    printf("Enter number of rooms:");
    scanf("%d",&n);
    typedef struct car car;
    car c[n];
    for(int i=0;i<n;i++)
    {
        printf("enter room_no ,type and rental rate per day:");
        scanf("%d %s %d",&c[i].room_no,c[i].type,&c[i].rental_rate);
    }  
    int nd;  
    printf("Enter number of days:");
    scanf("%d",&nd);
    printf("For %d days:\n",nd);
    for(int i=0;i<n;i++)
    {
        int a=c[i].rental_rate*nd;
        printf("%d will cost %d\n",c[i].room_no,a);
    }    
    return 0;
}