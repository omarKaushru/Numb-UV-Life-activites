#include<iostream>
#include<conio.h>
using namespace std;
main()
{
cout.setf(ios::hex, ios::basefield); /*Here, the basefield flags  are first cleared oct and dec flag and then work on the the hex flag.*/
cout << 987; // this displays 3db
getch();
}
