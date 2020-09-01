#include<iostream>
#include<string.h>
using namespace std;
int top=-1;
char stack[100][100],temp,del;
void push(char ch[100])
{
    strcpy(stack[++top],ch);
}
void pop(char *res)
{
    strcpy(res, stack[top--]);
}
int main()
{
    char top_val_stack[50],corr_top_val_stack[50],prefix[100],*exp,z[50];
    int len,length,length_of_exp,i;
    cout<<"enter a prefix expression:";
    cin>>prefix;
    exp=strrev(prefix);
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^')
        {
            /*pushing a string as a one character*/
            pop(top_val_stack);
            pop(corr_top_val_stack);
            len=strlen(top_val_stack);
            top_val_stack[len++]=exp[i];
            top_val_stack[len]='\0';
            strcat(top_val_stack,corr_top_val_stack);
            push(top_val_stack);
        }
        else
        {
            z[0]=exp[i];
            z[1]='\0';
            push(z);
        }
    }
    length=strlen(top_val_stack);
    length_of_exp=strlen(exp);
    if(length==length_of_exp)
    {
        cout<<"The infix expression of given expression:";
        cout<<top_val_stack<<endl;
    }
    else
    cout<<"invalid expression";
return 0;
}
