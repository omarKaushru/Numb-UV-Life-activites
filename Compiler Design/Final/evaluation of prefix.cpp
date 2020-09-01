///evaluation of prefix
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
      return op1 * op2 ;
      case '/':
      return op1/op2;
      case '+':
      return op1+op2;
      case '-':
      return op1-op2;
      default : return 0;
   }
}

int evalpreFix(char preFix[], int size)
{
   stack<int> s;
   int i = 0;
   char ch;
   int val;
   for(i=0; i<size; i++)
   {
      ch = preFix[i];
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
   char preFix[100];
   gets(preFix);
   strrev(preFix);
   int size = strlen(preFix);
   int val = evalpreFix(preFix, size);
   cout<<"\nExpression evaluates to "<<val;
   cout<<endl;
   return 0;
}
