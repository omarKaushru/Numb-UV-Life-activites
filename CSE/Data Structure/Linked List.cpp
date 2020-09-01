#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{
int info;			//info variable will store data of a Node.
Node *link;			//link pointer will store the address of Next Node.
};

Node *start=NULL;		//*start=NULL means Intially Linked List is Empty.

void Insert();
void Delete();
void Search();
void Display();

main()
{
int choice;

for(;;)				//Infinite Loop.
{
cout<<"\n\n\n\n---------- Linked List ---------- \n";
cout<<"\nMain Menu\n\n1. Insert at Beginning\n2. Delete from Beginning\n3. Search\n4. Display\n5. Exit\n\nEnter your choice : ";
cin>>choice;

switch(choice)
{
case 1:
Insert();
Display();
break;

case 2:
Delete();
Display();
break;

case 3:
Search();
break;

case 4:
Display();
break;

case 5:
return 0;					//Exit

default:
cout<<"\nWrong Input";
}
 }
  }

void Insert()				//Insert a New Node at the Beginning of List.
{
Node *temp=new Node();			//Memory Allocation to a New Node.
cout<<"\nEnter the Value : ";
cin>>temp->info;
temp->link=start;
start=temp;
}


void Delete()				//Delete Starting Node from List.
{
if(start==NULL)
cout<<"\nList is Empty.\n";
else
{
Node *temp=start;
start=start->link;
temp->link=NULL;
cout<<"\nItem "<<temp->info<<" is Deleted.\n";
}
}


void Search()				//Search a Node from List.
{
int item,loc=1;
Node *temp=start;

cout<<"\nEnter Item you want to Search :";
cin>>item;
while(temp!=NULL)			
{
if(item==temp->info)
{
cout<<"\nItem is Found at Location : "<<loc;
return;
}
else
{
temp=temp->link;
loc++;
}
}
cout<<"\nItem is Not Found";
}


void Display()				//Display's the Elements in List.
{
Node *temp=start;
cout<<"\nList is : ";
while(temp!=NULL)
{
cout<<temp->info<<" ";
temp=temp->link;
}
}
