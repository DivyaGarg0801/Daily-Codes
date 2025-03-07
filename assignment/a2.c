/*Design a program to manage inventory using structures. Define a structure named Product with members product_id, name, price, and quantity. 
Write functions to add a new product, update product details, display all products, and search for a product by its ID or name.*/
#include<stdio.h>
struct product
{
    char prod_id[8],name[8];
    int price,quantity;
};
void newadd(struct product s[],int n)
{
    int i;  
    for(i=0;i<n;i++)
    {
        printf("Input product-id and name");
        scanf("%s%s",s[i].prod_id,s[i].name);
        printf("enter price and quantity");
        scanf("%d%d",&s[i].price,&s[i].quantity);
    }
};
void display(struct product p)
{
    printf("%s\t%s\t%d\t%d",p.prod_id,p.name,p.price,p.quantity);

};
int main()
{
    int ch;
    struct product s;
    struct product p={"abcd1234", "fridge", 10000, 2};
    printf("what would you like to do?\n1.add details\n2.display details");
    scanf("%d",&ch);
    if (ch==1)
    {
        int n;
        printf("Enter number of products you want to add");
        scanf("%d",&n);
        struct product s[n];
        newadd(s,n);
    }
    else if (ch==2)
    {
        display(p);
    }
    return 0;

}