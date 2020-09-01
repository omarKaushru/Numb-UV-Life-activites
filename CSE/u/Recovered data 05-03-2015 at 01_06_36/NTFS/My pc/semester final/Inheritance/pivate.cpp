#include <iostream>
#include <conio.h>
using namespace std;
class base {
int i; // private to base
public:
int j;
void seti(int x) 
{ 
i = x; 
}
int geti() 
{ 
return i; 
}
};
// Inherit base as private.
class derived: private base {
public:
base::j;
base::seti; 
base::geti; 
int a;
};
main()
{
derived ob;
ob.j = 20;
ob.a = 40; 
ob.seti(10);
cout << ob.geti() << " " << ob.j << " " << ob.a;
getch();
}
