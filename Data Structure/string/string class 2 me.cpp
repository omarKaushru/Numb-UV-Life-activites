// Demonstrate insert(), erase(), and replace().
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
main()
{
char str1[11];
cout<<"Enter a string"<<endl;
gets(str1);
string str2("STL Power");
cout << "Initial strings:\n";
cout << "str1: " << str1 << endl;
cout << "str2: " << str2 << "\n\n";
// demonstrate insert()
cout << "Insert str2 into str1:\n";
str1.insert(6, str2);
cout << str1 << "\n\n";
// demonstrate erase()
cout << "Remove 9 characters from str1:\n";
str1.erase(6, 9);
cout << str1 <<"\n\n";
// demonstrate replace
cout << "Replace 8 characters in str1 with str2:\n";
str1.replace(7, 8, str2);
cout << str1 << endl;
getch();
}
