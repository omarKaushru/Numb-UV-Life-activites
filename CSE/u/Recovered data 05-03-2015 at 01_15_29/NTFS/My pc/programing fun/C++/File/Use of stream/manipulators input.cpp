#include<iostream>
#include<conio.h>
#include <cstring>
using namespace std;
// A simple input manipulator.
istream &getpass(istream &stream)
{
cout << '\a'; // sound bell
cout << "Enter password: ";
return stream;
}
int main()
{
char pw[80];
do {
cin >> getpass >> pw;
} while (strcmp(pw, "12345"));
cout << "Logon complete\n";
getch();
}
