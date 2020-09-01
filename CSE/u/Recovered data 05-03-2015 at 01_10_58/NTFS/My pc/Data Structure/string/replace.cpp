// Demonstrate insert(), erase(), and replace().
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
string str1("I love you");
string str2("hate");
cout << "Initial strings:\n";
cout << "str1: " << str1 << endl;
cout << "str2: " << str2 << "\n\n";
cout << "Replace  characters in str1 with str2:\n";
str1.replace(2, 4, str2);
cout << str1 << endl;
getch();
}

