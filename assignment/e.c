//Input ‘N’ integers and delete all occurences of a particular integer in the dynamic array. 
//Reduce the size of the array by the number of occurences deleted from the array above.
#include<stdio.h>
#include<stdlib.h>
int  main()
{
    int *p,m,n,i,new=0,dn;
    printf("Enter value for n:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Enter the integer to delete: ");
    scanf("%d", &dn);
    new = 0;
    for (i = 0; i < n; i++)
    {
        if (*(p+i)== dn) 
        {
            new++;
        }
    }
    int *q= (int *)malloc(new * sizeof(int));
    if (q== NULL) 
    {
        printf("Memory allocation failed!\n");
    }
    int j = 0;
    for (i = 0; i < n; i++) 
    {
        if (*(p+i) != dn) 
        {
            *(q+j)=*(p+i);
            j++;
        }
    }
    free(p);
    printf("New array after deleting %d:\n", dn);
    for (i = 0; i <n-new; i++) 
    {
        printf("%d ", *(q+i));
    }
    free(q);
    return 0;
}