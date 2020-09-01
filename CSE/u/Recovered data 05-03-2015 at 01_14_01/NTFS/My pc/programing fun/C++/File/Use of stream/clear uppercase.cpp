#include<iostream>
#include<conio.h>
using namespace std;
main()
{
cout.setf(ios::uppercase | ios::scientific);
cout << 100.12; // displays 1.001200E+02
cout.unsetf(ios::uppercase); // clear uppercase
cout << " \n" << 100.12; // displays 1.001200e+02
getch();
}
