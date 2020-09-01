#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
cout << setiosflags(ios::showpos); // The manipulator setiosflags() performs the same function as the member function setf() of ios.
cout << setiosflags(ios::showbase);
cout << 123 << " " << hex << 123;
getch();
}

// using manipulators instead of the ios member functions.
