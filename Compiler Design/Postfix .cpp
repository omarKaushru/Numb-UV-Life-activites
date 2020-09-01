#include <stdio.h>
#include <string.h>
#include <ctype.h>
char oStack[100],Postfix[100];
int top=-1;
void push(char a)
{
    oStack[++top]=a;
}
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
char pop()
{
    return (oStack[top--]);
}

int operatorPrecedence(char a)
{
    switch (a)
    {
        case '(':
        return 1;
        case '-':
        case '+':
        return 2;
        case '*':
        case '/':
        return 3;
        case '^':
        return 4;
    }
}
int main()
{
    char infixExpr[100];
    int i,t,j,k,length,f;
    printf("Enter an infix expression: ");
    gets(infixExpr);
    j=0,k=0;
    length=strlen(infixExpr);
    for(i=0; i<length; i++)
    {
        t=0;
        if(infixExpr[i]=='(')
        push(infixExpr[i]);
        else if (isalnum(infixExpr[i]))///This function checks whether the passed character is alphanumeric
        Postfix[k++] = infixExpr[i];
        else if (infixExpr[i] == ')')
        {
            while (oStack[top] != '(')
            {
                Postfix[k++] = pop();
            }
            pop(); /// Remove "(" by calling pop to decrease the top position by 1
        }
        else if(isOperator(infixExpr[i])==0)
        {
            t=operatorPrecedence(infixExpr[i]);
            if(t!=4)/// because the operator "^" is evaluated right to left so we just push it.
            while (operatorPrecedence(oStack[top])>=operatorPrecedence(infixExpr[i]))
            Postfix[k++]=pop();
            push(infixExpr[i]);
        }
    }
    while (oStack[top] != '\0') /// Pop from oStack till it becomes empty
    Postfix[k++] = pop();
    Postfix[k] = '\0';
    printf("\n\nPostfix: ");
    puts(Postfix);
    return 0;
}
