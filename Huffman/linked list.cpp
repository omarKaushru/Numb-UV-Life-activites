#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*var,*trav;

void insert_at_begning(int value)
{
     var=(struct node *)malloc(sizeof (struct node));
     var->data=value;
     if(head==NULL)
     {
         head=var;
         head->next=NULL;
     }
     else
     {
         var->next=head;
         head=var;
     }
}

void insert_at_end(int value)
{
      struct node *temp; 
      temp=head;
      var=(struct node *)malloc(sizeof (struct node));
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

void insert_at_middle(int value, int loc)
{
     struct node *var2,*temp;
     var=(struct node *)malloc(sizeof (struct node));
     var->data=value;
     temp=head;

     if(head==NULL)
     {
          head=var;
          head->next=NULL;
     }
     else
     {
          while(temp->data!=loc)
          {
                temp=temp->next;
          }
          var2=temp->next;
          temp->next=var;
          var->next=var2;
     }
}

int delete_from_middle(int value)
{
     struct node *temp,*var;
     temp=head;
     while(temp!=NULL)
     {
          if(temp->data == value)
          {
                if(temp==head)
                {
                     head=temp->next;
                     free(temp);
                     return 0;
                }
                else
                {
                     var->next=temp->next;
                     free(temp);
                     return 0;
                }
          }
          else
          {
               var=temp;
               temp=temp->next;
          }
     }
printf("data deleted from list is %d",value);
}

int delete_from_end()
{
     struct node *temp;
     temp=head;
     while(temp->next != NULL)
     {
          var=temp;
          temp=temp->next;
     }
     if(temp ==head)
     {
          head=temp->next; 
          free(temp);
          return 0;
     }
     printf("data deleted from list is %d",temp->data);
     var->next=NULL;
     free(temp);
     return 0;
}

void display()
{
     trav=head;
     if(trav==NULL)
     {
          printf("\nList is Empty");
     }
     else
     {
          printf("\nElements in the List: ");
          while(trav!=NULL)
          {
               printf(" -> %d ",trav->data);
               trav=trav->next;
          }
      printf("\n");
      }
}

int main()
{
     int i=0;
     head=NULL;
     printf("insertion at begning of linked list - 1");
     printf("\ninsertion at the end of linked list - 2");
     printf("\ninsertion at the middle where you want - 3");
     printf("\ndeletion from the end of linked list - 4");
     printf("\ndeletion of the data that you want - 5");
     printf("\nexit - 6\n");
     while(1)
     {
           printf("\nenter the choice of operation to perform on linked list");
           scanf("%d",&i);
           switch(i)
           {
                case 1:
                {
                 int value;
                 printf("\nenter the value to be inserted");
                 scanf("%d",&value);
                 insert_at_begning(value);
                 display();                
                 break; 
                }
                case 2:
                {  
                int value;
                printf("\nenter value to be inserted");
                scanf("%d",&value);
                insert_at_end(value);
                display();
                break;
                }
                case 3:
                {
                int value,loc;
                printf("\nafter which data you want to insert the data");
                scanf("%d",&loc);
                printf("\nenter the value to be inserted");
                scanf("%d",&value);
                insert_at_middle(value,loc);
                display();
                break;
                }
                case 4:
                {
                delete_from_end();
                display();
                break;
                }
                case 5:
                {
                int value;
                display();
                printf("\nenter the data that you want to delete from the list shown above");
                scanf("%d",&value);
                delete_from_middle(value);
                display();
                break;
                }
                case 6:
                {
                exit(0);
                }
           }
      }
getch();
}
