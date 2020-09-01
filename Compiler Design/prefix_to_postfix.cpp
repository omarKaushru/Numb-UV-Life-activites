#include<iostream>
#include<string.h>
using namespace std;
char postfix(char exp1[100]);
int top=-1,top1=-1;
char stack[100][100],stack1[100],temp,del;
void push(char ch[100])
{
    strcpy(stack[++top],ch);
}
void push1(char ch)
{
    stack1[++top1]=ch;
}
int oprt_priority(char op)
{
    if(op == '+' || op == '-')
    return(1);
    if(op == '*')
    return(2);
    if(op == '/')
    return(3);
    if(op == '^')
    return(4);
}
void pop(char *res)
{
    strcpy(res, stack[top--]);
}
char pop()
{
    return stack1[top1--];
}
int main()
{
    char top_val_stack[50],corr_top_val_stack[50],prefix[100],*exp,z[50],post[100];
    int len,length,length_of_exp,i,p;
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
        postfix(top_val_stack);
    }
    else
    {
        cout<<"invalid expression";
    }
return 0;
}
char postfix(char exp1[100])
{
    int p=0;
    char post[100];
    for(int i=0;exp1[i]!='\0';i++)
    {
        if((exp1[i]>=65 && exp1[i]<=90)||(exp1[i]>=97 && exp1[i]<=122)||isalnum(exp1[i])||(exp1[i]>='0' && exp1[i]<='9'))
        {
           post[p]=exp1[i];
           p++;
        }
        else if(exp1[i]=='+'||exp1[i]=='-'||exp1[i]=='*'||exp1[i]=='/'||exp1[i]=='^')
        {
          //  cout<<"S";
            if(stack1[top1]!='\0'&&stack1[top1]!='(')
            {
           //     cout<<"A";
                int x=oprt_priority(exp1[i]);
                int z=oprt_priority(stack1[top1]);
                if(x>z)
                {
                   push1(exp1[i]);
                }
                else if(x<=z)
                {
                    while(((oprt_priority(exp1[i]))<=(oprt_priority(stack1[top1])))&&(stack1[top1]!='('))
                    {
                    post[p]=pop();
                    p++;
                    }
                    push1(exp1[i]);
                }
            }
            else
            {
                push1(exp1[i]);
            }
        }
        else if(exp1[i]=='(')
                {
                    push1(exp1[i]);
                }
            else if(exp1[i]==')')
            {
                while(stack1[top1]!='(')
                      {
                          post[p]=pop();
                            p++;
                      }
                    if(exp1[i+1]==')')
                    {
                      top1--;
                    }
                      else if(exp1[i+1]!=')')
                      {
                          if(stack1[top1]!='(')
                             {
                               post[p]=pop();
                                p++;
                             }
                             else
                             top1--;
                      }
            }
    }
    while(stack1[top1]!='\0')
    {
        if(stack1[top1]!='(')
        {
          post[p]=pop();
            p++;
        }
        else
        top1--;
    }
    post[p]='\0';
    cout<<"The postfix expression of given expression:"<<post;
}
