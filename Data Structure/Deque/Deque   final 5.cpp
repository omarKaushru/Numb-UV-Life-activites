#include <conio.h>  
#include <iostream>
#include <deque>     /*deque class-template definition */
using namespace std;
main()
{
deque < int > v; /* Here I  create a deque of type int */
int ch;
main:
system("cls");
cout <<"\n\t\t..................................................\n\t\t\t::\v::\v:: This is a Deque ::\v::\v::\n\t\t.................................................."<<endl<<endl;
cout <<"\t[1] Insert\n\t[2] Display\n\t[3] Delete\n"<<endl<<endl<<"\t..::Enter the Choice:";
cin >>ch;
switch(ch){
case 1:
system("cls");
cout <<"\n\t\t..................................................\n\t\t\t::\v::\v:: This is a Deque ::\v::\v::\n\t\t.................................................."<<endl<<endl;
int w;
cout<<"\n[1] Insert from front\n\n[2] Insert from back\n\n\n..::Enter the Choice:";
cin>>w;
if(w==1){
int m;
cout<<"\nEnter the element  :";
cin>>m;
v.push_front(m);
system("cls");
cout <<"\n\t\t..................................................\n\t\t\t::\v::\v:: This is a Deque ::\v::\v::\n\t\t.................................................."<<endl<<endl;
cout<< "\nInsert complete from front side!"<<endl;
}
else {
int n;
cout<<"Enter the element  :";
cin>>n;
v.push_back(n);
system("cls");
cout <<"\n\t\t..................................................\n\t\t\t::\v::\v:: This is a Deque ::\v::\v::\n\t\t.................................................."<<endl<<endl;
cout<< "\nInsert complete from back side!"<<endl;
}
break;

case 2:
system("cls");
cout <<"\n\t\t..................................................\n\t\t\t::\v::\v:: This is a Deque ::\v::\v::\n\t\t.................................................."<<endl<<endl;
if(!v.empty()){
cout << "\nValues contains: ";
for ( int i = 0; i < v.size(); i++ )
cout << v[i] << ' ';
cout << endl;
cout<<"\nNumber of Data :"<<v.size()<<endl;
}
else cout<<"\n\tNoting to Display. Insert data please.\n\n";
break;

case 3:
system("cls");
cout <<"\n\t\t..................................................\n\t\t\t::\v::\v:: This is a Deque ::\v::\v::\n\t\t.................................................."<<endl<<endl;
if(!v.empty()){
int y;
cout<<"[1]Delete from front\n\n[2]Delete from back\n\n..::Enter the Choice:";
cin>>y;
if (y==1){
v.pop_front( );
system("cls");
cout <<"\n\t\t..................................................\n\t\t\t::\v::\v:: This is a Deque ::\v::\v::\n\t\t.................................................."<<endl<<endl;
cout<<"\nOne item deleted...."<<endl;
}
else {
v.pop_back( );
system("cls");
cout <<"\n\t\t..................................................\n\t\t\t::\v::\v:: This is a Deque ::\v::\v::\n\t\t.................................................."<<endl<<endl;
cout<<"\nOne item deleted...."<<endl;
}
}
else cout<<"\n\tNoting to Delete. Insert data please.\n\n";
break;   
}   /* End of switch */

int z;
cout<<"\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n";
cin>>z;
switch(z)
{
case 1:
goto main;
case 0:
break;
default:
cout<<"Invalid choice";
break;
}
getch();
}
