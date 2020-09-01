#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
// Right Arrow
ostream &ra(ostream &stream)
{
stream << "-------> ";
return stream;
}
// Left Arrow
ostream &la(ostream &stream)
{
stream << " <-------";
return stream;
}
int main()
{
cout << "My name is " << ra << " Kaushru " << "\n";
cout << "Ashiq is " << ra << "My cousin" << la;
getch();
}

/*  syntax:
    ostream &manip-name(ostream &stream)
{
// your code here
return stream;
} */
