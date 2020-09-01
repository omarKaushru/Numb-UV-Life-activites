#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
using namespace std;

char oStack[100];
int top=-1;
int isOperator(char a)
{
    switch(a)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        return 0;
    }
}
int operatorPrecedence(char a)
{
    switch(a)
    {
        case ')':
        return 1;
        case '+':
        case '-':
        return 2;
        case '*':
        case '/':
        return 3;
        case '^':
        return 4;
    }
}
void push(char c)
{
    oStack[++top]=c;
}
char pop()
{
    return oStack[top--];
}

int main()
{
    char infixExpr[100],Prefix[100];
    int i,j,k=0,length,t;
    printf("Enter an infix infixExpression: ");
    gets(infixExpr);
    strrev(infixExpr);
    for (i=0; infixExpr[i]!='\0'; i++)
    {
        if(infixExpr[i]==')')
        {
            while(oStack[top]!='\0')
            Prefix[k++]= pop();
            push(infixExpr[i]);
        }
        else if(infixExpr[i]=='(')
        {
            while(oStack[top]!=')')
            Prefix[k++]= pop();
            pop();
        }
        if(isOperator(infixExpr[i])==0)
        {
            t=operatorPrecedence(infixExpr[i]);
            if(operatorPrecedence(oStack[top])<=operatorPrecedence(infixExpr[i]))
            push(infixExpr[i]);
            else
            {
                if(t!=4)/// because the operator "^" is evaluated right to left so we just push it.
                while(operatorPrecedence(oStack[top])>operatorPrecedence(infixExpr[i]))
                Prefix[k++]= pop();
                push(infixExpr[i]);
            }
        }
        else if(isalnum(infixExpr[i]))
        Prefix[k++]=infixExpr[i];
    }
    while (oStack[top] != '\0') /// Pop from oStack till empty
    Prefix[k++] = pop();
    Prefix[k] = '\0';
    strrev(Prefix);
    printf("\n\nPrefix: ");
    puts(Prefix);
    return 0;
}
