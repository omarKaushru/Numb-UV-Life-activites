#include <conio.h>
#include <iostream>
using std::cout;
using std::endl; /* By declaring exactly which elements from the std namespace I want local to my
program, I’m able to access them directly */
main()
{
cout << "7 + 3 = " << 7 + 3 << endl;
cout << "7 - 3 = " << 7 - 3 << endl;
cout << "7 * 3 = " << 7 * 3 << endl;
cout << "7 / 3 = " << 7 / 3 << endl;
cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;
cout << "7 % 3 = " << 7 % 3 << endl;
cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl;
cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << endl;
getch();
}
