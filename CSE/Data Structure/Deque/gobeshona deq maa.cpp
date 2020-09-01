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
cout <<"[1] Insert from Front side\n[2] Insert from Back side\n[3] Display\n[4] Delete from front\n[5] Delete from back"<<endl<<endl<<"..::Enter the Choice:";
cin >>ch;
switch(ch){
case 1:
for (int m=5; m<10; m++)
v.push_front(m);
cout<< "\nInsert complete from front side"<<endl;
break;
case 2:
for (int n=0; n<5; n++)
v.push_back(n);
cout<< "\nInsert complete from back side"<<endl;
break;
case 3:
cout << "\nvalues contains: ";
   // use subscript operator to obtain elements of values
for ( int i = 0; i < v.size(); i++ )
cout << v[i] << ' ';
cout << endl;
break;
case 4:
{
deque < int >::iterator p = v.begin();
p = v.begin();
v.erase(p, p+1);
cout<<"\n\none item deleted"<<endl;
}
break;

case 5:
{    
deque < int >::iterator q = v.end();
q = v.end();
v.erase(q, q+1);
cout<<"\n\none item deleted"<<endl;
}
break;
}
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
