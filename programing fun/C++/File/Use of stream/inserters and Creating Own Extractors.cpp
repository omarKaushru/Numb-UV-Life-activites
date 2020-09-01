#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
class phonebook {
char name[80];
int areacode;
int prefix;
int num;
public:
phonebook() { };
phonebook(char *n, int a, int p, int nm)
{
strcpy(name, n);
areacode = a;
prefix = p;
num = nm;
}
friend ostream &operator<<(ostream &stream, phonebook o);
friend istream &operator>>(istream &stream, phonebook &o);
};
// Display name and phone number.
ostream &operator<<(ostream &stream, phonebook o)
{
stream << o.name << " ";
stream << "(" << o.areacode << ") ";
stream << o.prefix << "-" << o.num << "\n";
return stream; // must return stream
}
// Input name and telephone number.
istream &operator>>(istream &stream, phonebook &o)
{
cout << "Enter name: ";
stream >> o.name;
cout << "Enter area code: ";
stream >> o.areacode;
cout << "Enter prefix: ";
stream >> o.prefix;
cout << "Enter number: ";
stream >> o.num;
cout << "\n";
return stream;
}
int main()
{
phonebook a;
cin >> a;
cout << a;
getch();
}

/* syntex:
          istream &operator>>(istream &stream, class_type &obj)
{
// body of extractor
return stream;
} */
