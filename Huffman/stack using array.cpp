#define MAX 4 //you can take any number to limit your stack size
#include<stdio.h>
#include<conio.h>

int stack[MAX];
int top;

void push(int token)
{
    char a;
    if(top==MAX-1)
    {
        printf("Stack full");
        return;
    }
    do
    {
        printf("\nEnter the token to be inserted:");
        scanf("%d",&token);
        top=top+1;
        stack[top]=token;
        printf("do you want to continue insertion Y/N");
        a=getch();
    }
    while(a=='y');
}

int pop()
{
     int t;
     if(top==-1) 
     {
          printf("Stack empty");
          return -1;
     }
     t=stack[top];
     top=top-1;
     return t;
}

void show()
{
     int i;
     printf("\nThe Stack elements are:");
     for(i=0;i<=top;i++)
     {
          printf("%d",stack[i]);
     }
}

int main()
{
     char ch , a='y';
     int choice, token;
     top=-1;
     printf("1.Insert");
     printf("\n2.Delete");
     printf("\n3.show or display");
     do
     {
          printf("\nEnter your choice for the operation: ");
          scanf("%d",&choice);
          switch(choice)
          {
               case 1:
               {
               push(token);
               show();
               break;
               }              
               case 2: 
               {
               token=pop();
               printf("\nThe token deleted is %d",token);
               show();
               break;
               }             
               case 3:
               {
               show();
               break;
               }
               default:printf("Wrong choice");
               break;
         }
         printf("\nDo you want to continue(y/n):");
         ch=getch();
     }
     while(ch=='y'||ch=='Y');
     getch();
}
