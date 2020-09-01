#include<iostream>
#include<conio.h>
using namespace std;
class box {
int x, y;
public:
box(int i, int j) { x=i; y=j; }
friend ostream &operator<<(ostream &stream, box o);
};
// Output a box.
ostream &operator<<(ostream &stream, box o)
{
register int i, j;
for(i=0; i<o.x; i++)
stream << "=";
stream << "\n";
for(j=1; j<o.y-1; j++) {
for(i=0; i<o.x; i++)
if(i==0 || i==o.x-1) stream << "*";
else stream << " ";
stream << "\n";
}
for(i=0; i<o.x; i++)
stream << "=";
stream << "\n";
return stream;
}
main()
{
box a(14, 6), b(30, 7), c(40, 5),d(50,6);
cout << "Here are some boxes:\n";
cout <<a<<b<<c<<d;
getch();
}
