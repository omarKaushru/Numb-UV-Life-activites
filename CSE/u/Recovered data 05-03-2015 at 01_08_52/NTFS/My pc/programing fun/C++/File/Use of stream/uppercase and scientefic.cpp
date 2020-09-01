#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
cout.setf(ios::uppercase | ios::scientific);
cout << 100.12; // displays 1.001200E+02
getch();
}
