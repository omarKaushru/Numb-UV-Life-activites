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
        case '(':
        case ')':
        return 0;
    }
}
int operatorPrecedence(char a)
{
    switch(a)
    {
        case ')':
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
    char expr[100],Prefix[100];
    int i,j,k=0,length,t;
    cout<<"Enter an expression :"<<endl;
    gets(expr);
    strrev(expr);
    for (i=0; expr[i]!='\0'; i++)
    {
		if (isOperator(expr[i])!=0) /// if it is not symbol
		Prefix[k++]=expr[i];
		else
		{
			if (expr[i]==')')
			{
				push(expr[i]);
			}
			else if(expr[i]== '(')
             {
				while (oStack[top]!=')')
                Prefix[k++]=pop();
				pop();
			}
			else
			{
				if (operatorPrecedence(oStack[top])<=operatorPrecedence(expr[i]))
                push(expr[i]);
				else
				{
					while((oStack[top])>=operatorPrecedence(expr[i]))
                    Prefix[k++]=pop();
					push(expr[i]);
				}
			}
		}
    }
    while (oStack[top] != '\0') /// Pop from oStack till empty
    Prefix[k++] = pop();
    Prefix[k] = '\0';
    strrev(Prefix);
    puts(Prefix);
    return 0;
}
