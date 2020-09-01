#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
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
{ /* Function for POP operation */
 return (oStack[top--]);
}

int checkingPrecedence(char a)
{ /* Function for precedence */
 switch (a)
 {
 case '(':
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
int main()
{
    char exp[100],elem;
    int i,t,j,k,length,f;

    gets(exp);
    j=0,k=0;
    length=strlen(exp);
    for(i=0; i<length; i++)
    {
        t=0;
        if(exp[i]=='(')
        push(exp[i]);
        else if (isalnum(exp[i]))
        Postfix[k++] = exp[i];
        else if (exp[i] == ')')
        {
            while (oStack[top] != '(')
            Postfix[k++] = pop();
            elem = pop(); /// Remove "(" by calling pop to decrease the top position by 1
        }
        else if(isOperator(exp[i])==0)
        {
            t=checkingPrecedence(exp[i]);
            if(t!=4)/// because the operator "^" is evaluated right to left so we just push it.
            while (checkingPrecedence(oStack[top]) > checkingPrecedence(exp[i]))
            Postfix[k++] = pop();
            push(exp[i]);
        }
    }
    while (oStack[top] != '\0') /// Pop from oStack till it becomes empty
    Postfix[k++] = pop();
    Postfix[k] = '\0';
    puts(Postfix);
    return 0;
}
