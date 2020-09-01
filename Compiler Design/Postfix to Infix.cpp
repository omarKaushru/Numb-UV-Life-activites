#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
using namespace std;
char oStack[100],inFix[100],opStack[100];
int top=-1,tops=-1;

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
void push(char a)
{
    oStack[++top]=a;
}
char pop()
{
    return (oStack[top--]);
}

int main()
{
    char postFix[100],temp[100];
    int i,t,j,k,length,l;
    printf("Enter an postFix expression: ");
    gets(postFix);
    j=0,k=0;
    length=strlen(postFix);
    for (i=length-1; i>=0; i--)
    {
        push(postFix[i]);
    }
    i=0;
    while(oStack[top]!='\0')
    {
        if(isalnum(oStack[top]))
        inFix[i]=pop();
        else if(isOperator(oStack[top])==0)
        {
            strcpy(temp,inFix);
            t=strlen(inFix);
            for(j=t-1; j>=0; j--)
            {

                if(isOperator(inFix[j])!=0 && isOperator(inFix[j-1])!=0)
                {
                    for(k=j+1; k<=t; k++)
                    {
                        inFix[k]=temp[k-1];
                    }
                    inFix[j]=pop();
                    break;
                }
            }
        }
        i++;
        inFix[i]='\0';
    }
    puts(inFix);
    return 0;
}
