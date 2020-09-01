#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
 
class dqll //Declare the data members & Functions
{
char data;
dqll *next;
dqll *prev;
public:
void insert();
void del();
void display();
};
dqll *node;
 
void dqll::insert() //Insert a node
{
dqll *temp;
temp=new dqll;
char a;
cout<<endl<<"enter the element : ";
cin>>a;
if(node==NULL)
{
temp->data=a;
temp->next=temp;
temp->prev=temp;
node=temp;
}
else
{
int c;
cout<<"insert at d beg/end (1/2) : ";
cin>>c;
switch(c)
{
case 1:
{
dqll *r;
r=node;
temp->data=a;
temp->next=node;
node->prev=temp;
while(r->next!=node)
{
r=r->next;
}
r->next=temp;
temp->prev=r;
node=temp;
break;
}
case 2:
{
dqll *r;
r=node;
while(r->next!=node)
{
r=r->next;
}
temp->data=a;
r->next=temp;
temp->prev=r;
temp->next=node;
node->prev=temp;
break;
}
}
}
}
 
void dqll::del() //Delete a node
{
dqll *temp;
temp=node;
int op;
if(node->next==node)
{
node=NULL;
cout<<endl<<"---queue with single item deleted---"<<endl;
}
else
{
cout<<"deletion at d beg/end ??? (1/2) : ";
cin>>op;
switch(op)
{
case 1:
{
while(temp->next!=node)
{
temp=temp->next;
}
node=node->next;
node->prev=temp;
temp->next=node;
break;
                                                }              
case 2:
{
dqll *r;
while(temp->next!=node)
{
r=temp;
temp=temp->next;
}
r->next=node;
node->prev=r;
break;
}
}
}
}
 
void dqll::display() //Display the result
{
dqll *temp;
temp=node;
if(node==NULL)
{
cout<<endl<<"---queue is empty---";
}
else
{
cout<<endl<<"---contents---"<<endl;
while(temp->next!=node)
{
cout<<temp->data<<endl;
temp=temp->next;
}
cout<<temp->data;
/*cout<<endl<<"---jus checkin---"<<endl;
while(temp->prev!=node)
{
cout<<temp->data<<endl;
temp=temp->prev;
}
cout<<temp->data<<endl;
cout<<node->data;
*/
}
}
 
main()
{
dqll l; //Instantiate
int op;
char ch;
//clrscr();
do
{
cout<<endl<<"---enter ur choice---"<<endl<<"press!!!"<<endl;
cout<<"1->insert"<<endl<<"2->delete"<<endl<<"3->display"<<endl;
cout<<"ur option : ";
cin>>op;
switch(op)
{
case 1:
{
l.insert();
break;
}
case 2:
{
l.del();
break;
}
case 3:
{
l.display();
break;
}
default:
{
cout<<endl<<"---invalid option!!!---"<<endl;
}
}
cout<<endl<<"do u wanna continue???"<<endl<<"(y/n) : ";
cin>>ch;
}
while(ch=='y');
getch();
}
