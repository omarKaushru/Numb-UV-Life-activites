#include <iostream>
#include<conio.h>
using namespace std;
main()
{
cout.precision(7);
cout.width(14);
cout <<10.123456789 << "\n"; // displays 10.12345
cout.fill('*');
cout.width(14);
cout << 10.123456789 << "\n"; // displays *****10.12345
// field width applies to strings, too!
cout.width(14);
cout << "Hi!" << "\n"; // displays *******Hi!
cout.width(14);
cout.setf(ios::left); // left justify
cout << 10.123456789<<"\n"; // displays 10.12345*****
cout.width(14);
cout.setf(ios::right); // right justify
cout << 10.123456789; // displays 10.12345*****
getch();
}
