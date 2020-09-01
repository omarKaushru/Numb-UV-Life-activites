#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*temp;

void insert_data(int value)
{
    struct node *var;
    temp=head;
    var=(struct node *)malloc(sizeof(struct node));
    var->data=value;

    if(head==NULL)
    {
         head=var;
         head->next=NULL;
    }
    else
    {
         while(temp->next!=NULL)
         {
              temp=temp->next;
         }
         var->next=NULL;
         temp->next=var; 
    }
}

int count_node()
{
     int i=0;
     temp=head;
     while(temp!=NULL)
     {
          i++;
          temp=temp->next;
     }
     printf("\n\nnumber of nodes are %d  ",i);
}

void display()
{
     struct node *var;
     var=head;
     printf("\nlist of elments are \n");
     while(var!=NULL)
     {
          printf("-> %d ",var->data);
          var=var->next;
     }
}

int main()
{
     int i,value;
     char ch='y';
     head=NULL;

     printf(" 1.)  Insert node");
     printf("\n 2.)  display the list");
     printf("\n 3.)  count number of nodes");
     printf("\n 4.)  exit");
     while(ch=='y')
     {
          printf("\nChoose to do operation :");
          scanf("%d",&i);
          switch(i) 
          {
               case 1 :
               {
               printf("\nEnter the data to be inserted in node ");
               scanf("%d",&value);
               insert_data(value);
              //display();
               break;
          }
          case 2 :
          {
               display();
               break;
          }
          case 3 :
          {
               count_node();
               break;
          }
          case 4 :
          {
               exit(0);
               break;
          }
     }
}
getch();
}
