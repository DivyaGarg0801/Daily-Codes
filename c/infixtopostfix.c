/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
int prec(char c)
{
    if (c=='^')
        return 3;
    else if (c=='*' || c=='/')
        return 2;
    else if (c=='+'|| c=='-')
        return 1;
}
void infixtopostfix(char *s)
{
    char result[max];
    int ri=0,len,si=-1;
    len=strlen(s);
    char stack[max];
    for(int i=0;i<len;i++)
    {
        char c=s[i];
        if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            result[ri++]=c;
        }
        else if (c=='(')
        {
            stack[++si]=c;
        }
        else if (c==')')
        {
            while(si>=0 && stack[si]!=')')
                result[ri++]=stack[si--];
            si--;
        }
        else
        {
            while(si>=0 && prec(s[i])<prec(stack[si]))
            {
                result[ri++]=stack[si--];
            }
        stack[++si]=c;
        }
       
    }
    
    while(si>=0)
    {
        result[ri++]=stack[si--];
    }
    result[ri]='\0';
    
    printf("%s\n",result);
    
}
//A+(B*C-(D/E^F)*G)*H
int main()
{
    char s[max];
    printf("enter the infix expression:");
    scanf("%s",s);
    infixtopostfix(s);
    return 0;
}
*/
#include <stdio.h>
#include <ctype.h>  // For isalnum
#include <string.h> // For string manipulation

#define MAX 100

// Declare stack and top


// Function to return precedence of operators
int precedence(char c) 
{
    if (c=='^')
        return 3;
    else if (c=='*' || c=='/')
        return 2;
    else if (c=='+'|| c=='-')
        return 1;
    else
    {
        return -1;
    }
    
}

// Function to convert infix expression to postfix
void infixtopostfix(char* exp) {
    int i, k;
    char stack[MAX];
    int top = -1;
    char postfix[MAX];  // Array to store the postfix expression
    k = 0;  // Index for postfix array

    for (i = 0; exp[i] != '\0'; i++) {
        // If the character is an operand, add it to the postfix output
        if (isalnum(exp[i])) {
            postfix[k++] = exp[i];
        }
        // If the character is '(', push it to the stack
        else if (exp[i] == '(') {
            stack[++top] = exp[i];
        }
        // If the character is ')', pop and add to output until '(' is found
        else if (exp[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[k++] = stack[top--];
            }
            top--;  // Discard the '(' from the stack
        }
        // If an operator is encountered
        else {
            while (top != -1 && precedence(exp[i]) <= precedence(stack[top])) {
                postfix[k++] = stack[top--];
            }
            stack[++top] = exp[i];  // Push the current operator to the stack
        }
    }

    // Pop the remaining operators from the stack
    while (top != -1) {
        postfix[k++] = stack[top--];
    }

    postfix[k] = '\0';  // Null-terminate the postfix expression

    printf("Postfix expression: %s\n", postfix);
}

int main() 
{
    char exp[MAX];
    printf("Enter infix expression: ");
    scanf("%s",exp);
    infixtopostfix(exp);  // Convert infix to postfix
    return 0;
}
