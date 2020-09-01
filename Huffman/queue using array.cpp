#include<stdio.h>
#include<conio.h>
#define MAX 10

void insert(int);
int del();
int queue[MAX], rear=0, front=0;
void display();
int main()
{
     char ch , a='y';
     int choice, token;
     printf("1.Insert");
     printf("\n2.Delete");
     printf("\n3.show or display");
     do
     {
           printf("\nEnter your choice for the operation: ");
           scanf("%d",&choice);
          switch(choice)
          {
                case 1: insert(token);
                display();
                break;

                case 2:
                token=del();
                printf("\nThe token deleted is %d",token);
                display();
                break;

                case 3:
                display();
                break;

                default:
                printf("Wrong choice");
                break;
          }
          printf("\nDo you want to continue(y/n):");
          ch=getch();
    }
    while(ch=='y'||ch=='Y');
    getch();
}

void display()
{
    int i;
    printf("\nThe queue elements are:");
    for(i=rear;i<front;i++)
    {
        printf("%d ",queue[i]);
    }
}

void insert(int token)
{
    char a;
    if(rear==MAX)
    {
        printf("\nQueue full");
        return;
    }
    do
    {
        printf("\nEnter the token to be inserted:");
        scanf("%d",&token);
        queue[front]=token;
        front=front+1;
        printf("do you want to continue insertion Y/N");
        a=getch();
    }
    while(a=='y');
}

int del()
{
    int t;
    if(front==rear)
    {
        printf("\nQueue empty");
        return 0;
    }
    rear=rear+1;
    t=queue[rear-1];
    return t;
}
