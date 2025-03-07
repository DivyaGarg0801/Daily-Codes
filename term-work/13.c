#include <stdio.h>

int main() 
{
    FILE *p, *q;
    char a[1000],ch;
    int c,d;
    p= fopen("file.txt", "w+");
    q = fopen("Count.txt", "w+");
    if (p== NULL || q==NULL) 
    {
        printf("Error opening file.\n");
    }  
    else
    {
        printf("*****INPUT*****\n");
        printf("Enter a paragraph\n");
        char *b=fgets(a,sizeof(a),stdin);
        while (b != NULL && a[0] != '\n') 
        {
            fputs(a,p);
            b = fgets(a, sizeof(a), stdin);           
        }
        rewind(p);
        while (fgets(a, sizeof(a),p)) 
        {
            c = d = 0;
            for (int i = 0; a[i] != '\0'; i++) 
            {
                if (a[i]>='a'&& a[i]<='z' || a[i]>='A' && a[i]<='Z' || a[i] == ' ') 
                {
                    c++;
                } 
                else if (a[i]>='0' && a[i]<='9') 
                {
                    d++;
                }
            }
            fprintf(q, "%d %d\n", c,d);
            
        }
        rewind(q);
        printf("Counts written to Count.txt successfully.\n");
        printf("*****OUTPUT*****\n");
        printf("Content of File.txt:\n");
        while ((ch=getc(q)) != EOF) 
        {
            printf("%c",ch);
        }       
        fclose(p);
        fclose(q);
    }
    return 0;
}
