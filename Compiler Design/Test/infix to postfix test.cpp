#include<stdio.h>
#include <ctype.h>
#define SIZE 50            /* Size of Stack */

char s[SIZE];
int top = -1; /* Global declarations */

void push(char elem)
{ /* Function for PUSH operation */
 s[++top] = elem;
}

char pop()
{ /* Function for POP operation */
 return (s[top--]);
}

int pr(char elem) { /* Function for precedence */
 switch (elem)
 {
 case '#':
 return 0;
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
void pushit(int ele)
{                       /* Function for PUSH operation */
 s[++top]=ele;
}

int popit()
{                      /* Function for POP operation */
 return(s[top--]);
}

 int main()
 { /* Main Program */
 char infx[50], pofx[50], ch, elem;
 int i = 0, k = 0, op1, op2,ele;
 printf("\n\nRead the Infix Expression   ");
 scanf("%s", infx);
 push('#');
 while ((ch = infx[i++]) != '\0')
 {
  if (ch == '(')
   push(ch);
  else if (isalnum(ch))
   pofx[k++] = ch;
  else if (ch == ')')
  {
   while (s[top] != '(')
    pofx[k++] = pop();
   elem = pop(); /* Remove ( */
  }
  else
  { /* Operator */
   while (pr(s[top]) >= pr(ch))
    pofx[k++] = pop();
   push(ch);
  }
 }
  while (s[top] != '#') /* Pop from stack till empty */
  pofx[k++] = pop();
 pofx[k] = '\0'; /* Make pofx as valid string */
 printf("\n\nGiven Infix Expn: %s  Postfix Expn: %s\n", infx, pofx);

 while( (ch=pofx[i++]) != '\0')
 {
  if(isdigit(ch)) pushit(ch-'0'); /* Push the operand */
  else
  {        /* Operator,pop two  operands */
   op2=popit();
   op1=popit();
   switch(ch)
   {
   case '+':
   pushit(op1+op2);
   break;
   case '-':
   pushit(op1-op2);
   break;
   case '*':
   pushit(op1*op2);
   break;
   case '/':
   pushit(op1/op2);
   break;
   }
  }
 }
 printf("\n Given Postfix Expn: %s\n",pofx);
 printf("\n Result after Evaluation: %d\n",s[top]);
 return 0;
}
