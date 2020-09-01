///evaluation of postfix
#include<iostream>
#include<cctype>
#include<stack>
#include <cstdio>
#include <cstring>
using namespace std;

int eval(int op1, int op2, char operate)
{
   switch (operate)
   {
      case '*':
      return op2 * op1;
      case '/':
      return op2 / op1;
      case '+':
      return op2 + op1;
      case '-':
      return op2 - op1;
      default : return 0;
   }
}

int evalPostfix(char postfix[], int size)
{
   stack<int> s;
   int i = 0;
   char ch;
   int val;
   for(i=0; i<size; i++)
   {
      ch = postfix[i];
      if (isdigit(ch))
      {
         s.push(ch-'0');
      }
      else
      {
         int op1 = s.top();
         s.pop();
         int op2 = s.top();
         s.pop();
         val = eval(op1, op2, ch);
         s.push(val);
      }
   }
   return val;
}

int main()
{
   char postfix[100];
   gets(postfix);
   int size = strlen(postfix);
   int val = evalPostfix(postfix, size);
   cout<<"\nExpression evaluates to "<<val;
   cout<<endl;
   return 0;
}
