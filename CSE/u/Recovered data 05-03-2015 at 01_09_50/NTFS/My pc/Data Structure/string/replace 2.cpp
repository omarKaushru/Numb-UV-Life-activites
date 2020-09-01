// Demonstrate insert(), erase(), and replace().
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
string str1("I love you"), str2("Bangladesh");
int i,j;
cout << "Initial strings:\n";
cout << "str1: " << str1 << endl;
cout << "str2: " << str2 << "\n\n";
i = str1.find("love");
j=str2.size();
cout << "Replace  characters in str1 with str2:\n\n";
str1.replace(i, j, str2);
cout << str1 << endl;
getch();
}

