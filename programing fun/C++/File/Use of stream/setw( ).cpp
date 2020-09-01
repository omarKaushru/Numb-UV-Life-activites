#include<iostream>
#include<iomanip> // This header file To access manipulators setw(),setfill().
#include<conio.h>
using namespace std;
main()
{
cout << hex << 100 << endl;
cout << setfill(':') << setw(10) << 2343;
getch();
}
