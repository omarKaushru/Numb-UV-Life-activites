#include <conio.h>
#include <iostream>
#include <deque>     // deque class-template definition
#include <algorithm> // copy algorithm
#include <iterator>  // ostream_iterator
using namespace std;

main()
{
deque < int > v; // create deque of type int
ostream_iterator< int > output(cout);

int ch;
main:
system("cls");
cout <<"This is a Deque"<<endl<<endl;
cout <<"[1] Insert\n[2] Display\n[3] Delete"<<endl<<endl<<"..::Enter the Choice:";
cin >>ch;
switch(ch){
           
case 1:
system("cls");
int n;
cout<<"Enter the element  :";
cin>>n;
v.push_back(n);
cout<< "\nInsert complete from back side!"<<endl;
break;
case 2:
system("cls");
cout << "\nvalues contains: ";
for ( int i = 0; i < v.size(); i++ )
cout << v[i] << ' ';
cout << endl;
break;

case 3:
system("cls");
deque < int >::iterator p = v.begin();
p = v.begin();
v.erase(p, p+1);
system("cls");
cout<<"\nOne item deleted...."<<endl;
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
