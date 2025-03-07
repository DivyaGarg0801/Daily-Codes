#include<stdio.h>
#include<string.h>
int main()
{
    FILE *p,*q;
    char ch[100],word[100];
    p=fopen("Data.txt","r");
    q=fopen("Del.txt","w+");
    if (p==NULL || q==NULL)
        printf("Error");
    else
    {
        printf("*****INPUT*****\n");
        printf("Content of file Data.txt:\n");
        fgets(ch,sizeof(ch),p);
        printf(" %s",ch);
        rewind(p);
        while (fscanf(p, "%s", word) != EOF) 
        {
            if (strcmp(word, "a") == 0 || strcmp(word, "the") == 0 || strcmp(word, "an") == 0)
            {
                fprintf(q, " ");
            } 
            else 
            {
                fprintf(q, "%s", word);
            }
        }
        rewind(q);
        printf("*****OUTPUT*****\n");
        printf("Content of file Del.txt:\n");
        fgets(ch,sizeof(ch),q);
        printf(" %s",ch);
    }
    fclose(p);
    fclose(q);
    return 0;
}