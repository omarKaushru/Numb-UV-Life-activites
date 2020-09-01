#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
class phonebook {
public:
char name[80];
int areacode;
int prefix;
int num;
phonebook(char *n, int a, int p, int nm)
{
strcpy(name, n);
areacode = a;
prefix = p;
num = nm;
}
};
// Display name and phone number.
ostream &operator<<(ostream &stream, phonebook o)
{
stream << o.name << " ";
stream << "(" << o.areacode << ") ";
stream << o.prefix << "-" << o.num << "\n";
return stream; // must return stream
}
int main()
{
phonebook a("Shjol", 111, 555, 1234);
phonebook b("Omar", 312, 555, 5768);
phonebook c("Kaushru", 212, 555, 9991);
cout << a << b << c;
getch();
}


/* general form inserter 
ostream &operator<<(ostream &stream, class_type obj)
{
// body of inserter
return stream;
} */
