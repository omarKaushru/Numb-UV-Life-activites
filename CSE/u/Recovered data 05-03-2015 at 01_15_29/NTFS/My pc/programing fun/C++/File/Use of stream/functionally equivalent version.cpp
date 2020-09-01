#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
cout.setf(ios::hex, ios::basefield);
cout << 100 << "\n"; // 100 in hex
cout.fill('?');
cout.width(10);
cout << 2343.0;
getch();
}
// functionally equivalent version
