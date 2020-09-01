#include<iostream>
#include<conio.h>
using namespace std;
main( )
{
cout.setf(ios::showpoint | ios::showpos, ios::showpoint);
cout << 100.0; // displays 100.000, not +100.000
getch();
}
