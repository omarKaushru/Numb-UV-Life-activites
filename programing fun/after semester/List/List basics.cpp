// List basics.
#include <iostream>
#include <list>
#include <conio.h>
using namespace std;
main()
{
list<int> lst; // create an empty list
int i;
for(i=0; i<100; i++) lst.push_back(i);
cout << "Size = " << lst.size() << endl;
cout << "Contents: \n\n";
list<int>::iterator p = lst.begin();
while(p != lst.end()) {
cout << *p << " ";
p++;
}
cout << "\n\n";
// change contents of list
p = lst.begin();
while(p != lst.end()) {
*p = *p + 100;
p++;
}
cout << "Contents modified: \n\n";
p = lst.begin();
while(p != lst.end()) {
cout << *p << " ";
p++;
}
getch();
}
