#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
bool B;
B = true;
cout << B << " " << boolalpha << B << endl;
cout << "Enter a Boolean value: ";
cin >> boolalpha >> B;
cout << "Here is what you entered: " << B;
getch();
}
