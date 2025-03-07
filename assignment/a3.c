/*Design a program to manage inventory using structures. Define a structure named Product with members product_id, name, price, and quantity. 
Write functions to add a new product, update product details, display all products, and search for a product by its ID or name.*/
#include<stdio.h>
#include<string.h>
struct product
{
    char prod_id[10],name[8];
    int price,quantity;
};
void search(struct product p[],char a[])
{
    int i;    
    for(int i=0;i<5;i++)
    {
        if (strcmp(p[i].name,a)==0)
        {
            printf("%s\t%s\t%d\t%d",p[i].prod_id,p[i].name,p[i].price,p[i].quantity);
        }
    } 
    
};
void update(struct product p[],char a[])
{
    for(int i=0;i<5;i++)
    {
        if (strcmp(p[i].name,a)==0)
        {
            int b,c;
            printf("enter updated price and quantity");
            scanf("%d%d",&b,&c);
            p[i].price=b;
            p[i].quantity=c;
        }
    }
};
int main()
{
    int ch,i;
    struct product p[5]={
        {"abcd1234", "fridge", 10000, 2},
        {"efgh5678","cooler",20000,3}
    };
    printf("what would you like to do?\n1.search details\n2.update details");
    scanf("%d",&ch);
    if (ch==1)
    {
        char a[8];
        printf("Enter product name you would like to search the details for");
        scanf("%s",a);
        search(p,a);
    }
    else if (ch==2)
    {
        char a[8];
        printf("Enter name of product you would like to update");
        scanf("%s",a);
        update(p,a);
        for(i=0;i<5;i++)
        {
            printf(" %s %s %d %d",p[i].prod_id,p[i].name,p[i].price,p[i].quantity);
        }
    }
    return 0;

}