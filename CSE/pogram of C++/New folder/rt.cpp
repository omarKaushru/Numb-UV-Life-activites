#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
main()
{
// define anonymous union
union {
long l;
double d;
char s[4];
} ;
// now, reference union elements directly
l = 100000;
cout << l << " ";
d = 123.2342;
cout << d << " ";
strcpy(s, "hi");
cout << s;
getch();
}
